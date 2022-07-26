class Solution {
public:
    string multiply(string num1, string num2) {
        
        int len = num1.length() + num2.length();
        vector<int> arr(len, 0);
        
        if(num1=="0" || num2=="0") return "0";
        
    
        
        int n1 = num1.length();
        int n2 = num2.length();
        for(int i=n1-1; i>=0; i--){
            int carry=0;
            int val = num1[i] - '0';
            int index = len - (n1-i);
            for(int j=n2-1; j>=0; j--){
                int curr = num2[j] - '0';
                int val2 = val*curr;
                //cout<<index<<' '<<val2<<' '<<carry<<" ";
                val2+=carry;
                int ans = val2%10;
                //cout<<ans<<" | ";
                arr[index] += ans;
                carry  = val2/10;
                index--;
                if(j==0 && carry!=0){
                    arr[index]+=carry;
                }
            }
        }
        
        int i=0;
        while(arr[i]==0 && i<len){
            i++;
        }
        
        string sol= "";
        
        int idx = len-1;
        int carry=0;
        while(idx>=i){
            
            int val = (arr[idx] +carry);
            
            sol = to_string(val%10) + sol;
            carry = val/10;
            idx--;
            
        }
        
        if(carry!=0){
        sol = to_string(carry) +sol;
        }
        
        return sol;
    
        
        
    }
};
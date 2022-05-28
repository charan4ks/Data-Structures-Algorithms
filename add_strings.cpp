class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string sol = "";
        
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry =0;
        int sum=0;
        
        while(i>=0 || j>=0){
            int a=0, b=0;

            
            if(i>=0){
                a = num1[i] - '0';
            }
            if(j>=0){
               b = num2[j] - '0'; 
            }
            sum = a+b+carry;
            carry = sum/10;
            
            sol = to_string(sum%10)+sol;
            
            i--;
            j--;
            
            
        }
        
        if(carry!=0) sol = to_string(carry) + sol;
        
        return sol;
        
    }
};
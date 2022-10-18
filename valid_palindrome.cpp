class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        
        int A = 'A';
        int a = 'a';
        int num = '0';
        
        string str = "";
        
        
        for(int i=0; i<n; i++){
            int val = s[i];
        //    cout<<val<< ' '<<A<<' '<<a<<endl;
            if(val>=A && val<=A+25){
                str+= tolower(s[i]);
            }else if (val>=a && val<=a+25){
                str+=s[i];
            }else if (val>= num && val<= num+9){
                str+=s[i];
            }
        }
        
        int end = str.length()-1;
        int start = 0;
        while(start<=end){
            
            if(str[start] != str[end]) return false;
            start++;
            end--;
        }
    
        
        return true;
        
        
        
    }
};
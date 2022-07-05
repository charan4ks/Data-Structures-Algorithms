class Solution {
public:
    int myAtoi(string s) {
        
        int sol=0;
        int n = s.length();
        int index =0;
        int sign = 1;
        
        while(index<n && s[index] == ' '){
            index++;
        }
        
        if(index<n && (s[index]=='-' || s[index]=='+')){
            if(s[index] == '-')sign = -1;
            index++;
        }
        
        while(index<n && isdigit(s[index])){
            
            if(sol>INT_MAX/10 || (sol == INT_MAX/10 && (s[index]-'0') >INT_MAX%10 ) ){
                
                sol = sign == 1 ? INT_MAX : INT_MIN;  
                return sol;
            }
            
            sol = sol*10 + (s[index] - '0');
            index++;
            
        }
        
        sol*=sign;
        
        return sol;
        
    }
};
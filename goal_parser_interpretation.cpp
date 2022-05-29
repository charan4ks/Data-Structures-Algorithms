class Solution {
public:
    string interpret(string command) {
        
        int n = command.length();
        string ans="";
        int i=0;
        while(i<n){
            if(command[i] == 'G'){
                ans+=command[i];
                i++;
            }
            else if(command[i+1] == ')'){
                ans+='o';
                i = i+2;
            }else{
                ans= ans + "al";
                i = i+4;
            }
        }
        
        return ans;
        
    }
};
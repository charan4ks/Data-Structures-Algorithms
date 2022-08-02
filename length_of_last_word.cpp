class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int index = s.length() -1;
        
        int sol =0;
        
        while(index >=0 && s[index] == ' '){
            
            index--;
        }
        
        while(index>=0){
            if(s[index] == ' ') break;
            sol++;
            index--;
        }
        
        return sol;
        
    }
};
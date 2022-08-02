class Solution {
public:
    int maxRepeating(string sequence, string word) {
        
        int n = word.length();
        int len = sequence.length();
        
        int index = 0, sol=0;
        
        while(index+n<=len){
            if(sequence.substr(index,n) == word){
                int temp=0;
                int idx = index;
                while(idx+n<=len && sequence.substr(idx,n) == word){
                    temp++;
                    idx+=n;
                }
                sol = max(sol, temp);
            }
            
            index++;
        }
        
        return sol;
        
    }
};
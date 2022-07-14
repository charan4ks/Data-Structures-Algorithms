class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>pattern(numRows);
        int n = s.length();
        
        int i=0, j=0;
        
        bool down = true;
        
        if(numRows == 1) return s;
        
        while(i<n){
            pattern[j]+=s[i];
            if(down)j++;
            else j--;
            if(j >numRows-1 || j<0) {
                down = !down;
                j = j<0 ? j+2 : j-2;
            }
            
            i++;
        }
        
        string ans="";
        
        for(int k=0; k<numRows; k++){
            ans+=pattern[k];
        }
        
        return ans;
        
    }
};
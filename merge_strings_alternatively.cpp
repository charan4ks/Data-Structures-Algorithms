class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        
        string ans = "";
        int i=0,j=0;
        
        while(i<m || j<n){
            if(i<m)ans+=word1[i];
            if(j<n)ans+=word2[j];
            i++;
            j++;
        }
        
        return ans;
        
    }
};
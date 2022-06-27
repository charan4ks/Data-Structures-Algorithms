class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        int n = strs.size();
        
        sort(strs.begin(), strs.end());
        
        string first_word = strs[0];
        string last_word = strs[n-1];
        
        int i=0;
        
        while(i<first_word.length() &&  i<last_word.length() && first_word[i] == last_word[i]){
            
            ans+=first_word[i];
            i++;
            
        }
        
        return ans;
    }
};
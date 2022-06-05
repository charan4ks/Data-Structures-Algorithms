class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n = s.length();
        vector<bool>dp(n+1, false);
        unordered_map<string, bool>m;
        
        for(auto i : wordDict){
            m[i] = true; 
        }
        
        dp[0] = true;
        
        for(int i=1; i<=n; i++){
            for(int j = i-1; j>=0; j--){
                if(dp[j]){
                    if(m.count(s.substr(j,i-j)) > 0){
                        dp[i] = true;
                    }
                }
            }
        }
        
        return dp[n];     
    }
};
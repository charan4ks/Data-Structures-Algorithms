class Solution {
public:
    int numTrees(int n) {
        
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i=1; i<=n; i++){
            int val=0;
            for(int j=0; j<i; j++){
                val+= (dp[j] * dp[i-j-1]);
            }
            dp[i] = val;
        }
        
        return dp[n];
        
    }
};
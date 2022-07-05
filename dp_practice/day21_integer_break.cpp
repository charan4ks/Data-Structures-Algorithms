class Solution {
public:
    int integerBreak(int n) {
        
        
        vector<int>dp(n+1, 1);
        
        dp[0] = 0;
        dp[1] =1;
        
        
        for(int i=2; i<=n; i++){
            
            for(int j=i-1; j>0; j--){
                int val = max(dp[i-j]*dp[j], dp[i-j]*j);
                dp[i] = max(dp[i],max((i-j)*j, val));
            }
        }
        
        return dp[n];
        
    }
};
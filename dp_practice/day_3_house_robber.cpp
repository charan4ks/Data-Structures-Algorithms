class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1) return nums[0];
        if(n==0) return 0;
        
        int sol = 0;
        
        vector<int>dp(n+1);
        
        dp[0] = 0;
        dp[1] = nums[0];
        dp[2] = nums[1];
        
        sol = max(dp[1], dp[0]);
        
        for(int i=2; i<=n; i++){
            if(i>2)dp[i] = nums[i-1] + max(dp[i-2], dp[i-3]);
            else dp[i] = nums[i-1];
            sol = max(sol, dp[i]);
        }
        
        return sol;
        
        
    }
};
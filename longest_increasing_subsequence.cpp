class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>dp(n,1);
        
        int sol =0,j;
        
        for(int i= n-1; i>=0; i--){
            j = i+1;
            while( j < n){
                if(nums[j] > nums[i]) dp[i] = max(dp[i], 1 + dp[j]);
                j++;
            }
            
            sol = max(dp[i], sol);
        }
        
        return sol;
        
    }
};
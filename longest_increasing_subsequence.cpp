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


// Approach 2 - left side iteration- time reduced


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>dp(n,1);
        
        int sol =0;
        
        for(int i=0; i<n; i++){
            
            sol = max(sol, dp[i]);
            
            for(int j=i+1; j<n;j++){
                if(nums[j] > nums[i])dp[j] = max(dp[j], 1+dp[i]);
            }
        }
        
        return sol;
        
    }
};
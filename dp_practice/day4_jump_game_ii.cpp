class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        int step=1;
        int sol=INT_MAX;
        vector<int>dp(n,INT_MAX-1);
        dp[0]=0;
        
        if(n == 1) return 0;
        
        for(int i=0; i<n; i++){
            
            int j = nums[i] + i;
            
            if(j>n-2)sol = min(sol, 1+dp[i]);
            
            while(j>i){
                if(j<n-1)dp[j] = min(dp[i]+1, dp[j]);
                j--;
            }
            
        }
        
        return sol;
        
    }
};
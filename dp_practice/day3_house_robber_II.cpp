class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        int sol=0;
        
        if(n==1) return nums[0];
        
        vector<int>dp(n,0);
        
        
        for(int i=0; i<n-1;i++){
            
            if(i>2){
                dp[i] = nums[i] + max(dp[i-2], dp[i-3]);
            }else if(i==2){
                dp[i] = nums[i] + dp[i-2];
            }
            else{
                dp[i] = nums[i];
            }
            
            sol = max(dp[i], sol);
        }
        
        for(int i=1; i<n; i++){
            
            if(i>3){
                dp[i] = nums[i] + max(dp[i-2], dp[i-3]);
            }else if(i==3 ){
                dp[i] = nums[i] + dp[i-2];
            }
            else{
                dp[i] = nums[i];
            }
            
            sol = max(dp[i], sol);
        }
            
        
        return sol;
        
    }
};
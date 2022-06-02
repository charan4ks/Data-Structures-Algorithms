class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum=0, sol=INT_MIN;
    
        for(int i=0; i<n; i++){
            sum+=nums[i];
            sol = max(sol,sum);
            if(sum<0) sum =0;
        }
        
        return sol;
        
    }
};
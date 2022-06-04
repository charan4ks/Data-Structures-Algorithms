class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int prev_max=0, prev_min=0, max_sum=INT_MIN,min_sum=INT_MAX;
        
        for(int i=0; i<n; i++){
            sum+=nums[i];
            
             prev_max = max(prev_max+nums[i], nums[i]);
            max_sum = max(prev_max, max_sum);
     
            prev_min = min(prev_min+nums[i], nums[i]);
            min_sum = min(prev_min, min_sum);
            
        }
        
        return sum==min_sum ? max_sum : max(max_sum, sum-min_sum);
        
    }
};
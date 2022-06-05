class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return false;
        int min2 = INT_MAX-1, min1 = INT_MAX;
        
        for(int i=0; i<n; i++){
            if(nums[i]>min1){
                return true;
            }
            
            if(nums[i] < min1){
                if(nums[i] <= min2) min2 = nums[i];
                else min1 = nums[i];
            }
        }
        
        return false;
    }
};
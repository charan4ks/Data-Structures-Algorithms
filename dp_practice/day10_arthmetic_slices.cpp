// brute_force solution

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int sol =0;
        int n = nums.size();
        
        for(int i=0; i<n-1; i++){
            
            int diff = nums[i+1] - nums[i];
            for(int j=i+2; j<n; j++){
                if(diff == nums[j] - nums[j-1]) sol++;
                else break;
            }
        }
        
        return sol;
    }
};
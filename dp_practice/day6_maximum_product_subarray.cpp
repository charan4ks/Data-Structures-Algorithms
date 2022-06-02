class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int max1 = nums[0];
        int min1 = nums[0];
        int sol = max1;
        
        for(int i=1; i<n; i++){
            int curr = nums[i];
            int temp = max(curr, max(curr*max1, curr*min1) );
            min1 = min(curr, min(curr*max1,curr*min1));
            max1 = temp;
            sol = max(max1, sol);
        }
        
        return sol;
        
    }
};
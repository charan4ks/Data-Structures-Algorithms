class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()-1;
        
        while(left<=right){
            int pivot = left + (right - left)/2;
            
            if(nums[pivot] == target) return pivot;
            else if(nums[pivot] > target) right = pivot-1;
            else left = pivot+1;
            
        }
        
        return -1;
        
    }
};
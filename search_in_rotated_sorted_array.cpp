class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        int pivot;
        
        while(left<= right){
            pivot = left + (right-left)/2;
            
            if(nums[pivot] == target) return pivot;
            
            if(nums[pivot] >= nums[left]){
                
                if(nums[pivot] > target && nums[left] <= target) right = pivot-1;
                else left = pivot+1;
                
            }else{
                if(nums[pivot] < target && target <= nums[right])left = pivot+1;
                else right = pivot-1;
            }
            
        }
        
        return -1;
    }
};
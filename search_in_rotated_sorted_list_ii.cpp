class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int right = n-1;
        int left =0;
        
        while(left<=right){
            int pivot = left + (right-left)/2;
            
            if(nums[pivot] == target) return true;
            
            if(nums[left] == nums[pivot] && nums[right] ==nums[pivot]){
                left++;
                right--;
            }
            
            else if(nums[pivot]>=nums[left]){
                // left sorted array
                if(nums[pivot] == target) return true;
                else if(nums[pivot] >target && nums[left] > target){
                 left = pivot+1;
                } else if(nums[pivot] >target && nums[left] <= target){
                 right = pivot-1;
                }else{
                    left = pivot+1;
                }
                
            }else{
                //right sorted array
                if(nums[pivot] == target) return true;
                else if(nums[pivot] <target && nums[right]>=target ) left = pivot+1;
                else if(nums[pivot] <target && nums[right]<target ) right = pivot-1;
                else right = pivot-1;
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> sol = {-1, -1};
        
        int pivot, left =0, right = nums.size()-1;
        
        while(left<=right){
            
            pivot = left + (right-left)/2;
            
            if(nums[pivot] == target){
                
                int first = pivot;
                
                while( first >=0 && nums[first] == target){
                    sol[0] = first;
                    first--;
                }
                
                while(pivot <=right && nums[pivot] == target){
                    sol[1] = pivot;
                    pivot++;
                }
                
                return sol;
                
            }else if(nums[pivot]>target) right = pivot-1;
            else left = pivot+1;
            
            
        }
        
        return sol;
        
    }
};
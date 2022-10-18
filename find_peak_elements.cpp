class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int sol;
        int n = nums.size();
        int left = 0;
        int right = n-1;
        
        while(left<=right){
            int pivot = left + (right-left) / 2;
            //cout<<pivot<<' '<<nums[pivot]<<endl;
            int leftNeighbour = pivot==0 ? INT_MIN : nums[pivot-1];
            int rightNeighbour = pivot==n-1 ? INT_MIN : nums[pivot+1];
            
            
            if((nums[pivot] > leftNeighbour || pivot ==0) && (nums[pivot]>rightNeighbour || pivot == n-1)){
                return pivot;
            }
            
            if(nums[pivot]>= leftNeighbour && nums[pivot] <= rightNeighbour) left = pivot+1;
            else right = pivot-1;
            
        }
        
        
        return left;
    }
};
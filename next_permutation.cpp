class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n= nums.size();
        int i=n-1;
        
        while(i>0){
            if(nums[i] > nums[i-1]) break;
            i--;
        }
        
        if(i==0){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int j=i;
        int index = j;
        while(j<n){
            if(nums[j] <= nums[index] && nums[j] > nums[i-1]){
                index = j;
            }
            j++;
        }
        
        swap(nums[i-1], nums[index]);
        
        reverse(nums.begin()+i, nums.end());
        
        return;
        
        
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int min_val;
        
        for(int i=0; i<n;i++){
            
            min_val = i;

            for(int j=i;j<n; j++){
                if(nums[j]<nums[min_val])min_val = j;
            }
            
            swap(nums[i], nums[min_val]);
        }
        
       return; 
        
    }
};
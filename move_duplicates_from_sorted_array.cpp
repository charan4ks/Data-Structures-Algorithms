class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j=1, k=1;
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                
            }else{
                nums[j] = nums[i];
                k++;
                j++;
            }
        }
        
        
        return k;
    }
};
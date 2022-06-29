class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        
        int left=0, right=sum;
        
        for(int i=0; i<n; i++){
            
            if(i>0)left+=nums[i-1];
            right-=nums[i];
            
            if(left==right) return i;
        }
        
        return -1;
        
    }
};
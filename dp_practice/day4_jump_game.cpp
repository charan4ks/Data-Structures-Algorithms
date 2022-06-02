class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        int step =1;
        
        for(int i =n-2; i>=0; i--){
           if(nums[i] >= step){
               step=1;
           }else{
               step++;
           }
            
        }
        
        return step==1 ? true:false;
        
    }
};
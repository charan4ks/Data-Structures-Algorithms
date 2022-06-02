class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int n = nums.size();
        int product = 1;
        int count =0;
        int sol=0;
        
        for(int i=0; i<n; i++){
            if(nums[i] < 0) product*=-1;
            
            count++;
            
            if(nums[i]==0){
                product = 1;
                count=0;
            }
            
            if(product>0)sol = max(sol, count);
        }
        
        count=0;product=1;
        
        for(int i= n-1; i>=0; i--){
            if(nums[i] < 0) product*=-1;
            
            count++;
            if(nums[i]==0){
                product = 1;
                count=0;
            }
            if(product>0)sol = max(sol, count);

        }
        
        return sol;
    }
};
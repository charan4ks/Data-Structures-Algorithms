class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int left = n-3;
        int sol =0,a,b,c;
        
        while(left>=0){
            
            a = nums[left+2];
            b = nums[left+1];
            c = nums[left];
            if(b+c>a){
                return a+b+c;
            }else
            left--;
        }
        
        return sol;
        
    }
};
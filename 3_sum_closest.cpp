class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sol;
        
        for(int i=0; i<n-2; i++){
            int j=i+1;
            int k = n-1;
            while(j<k){
                int num = nums[i] + nums[j] + nums[k];
                if(sol ==NULL)sol = num;
                if(abs(num-target) < abs(sol-target)) sol = num;
                if(num>target)k--;
                else j++;
            }
        }
        
        return sol;
        
    }
};
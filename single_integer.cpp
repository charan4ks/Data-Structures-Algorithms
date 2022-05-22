class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>m;
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int prev = nums[0];
        
        int i=0;
        
        while(i<n){
            
            int prev = nums[i];
            i++;
            
            if(i ==n || (nums[i] != prev)) return prev;
            i++;
            
        }
        
        return 0;
        
    }
};
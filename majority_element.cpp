class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        int n = nums.size();
        
        int target =  n/2 +1;
        
        for(int i=0; i<n; i++){
            
           if(m.count(nums[i]) >0){
               m[nums[i]]++;
           } else{
               m[nums[i]] = 1;
           }
            if(m[nums[i]] == target) return nums[i];
            
        }
        
        return 0;
        
    }
};
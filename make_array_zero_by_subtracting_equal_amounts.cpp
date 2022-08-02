class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int>m;
        
        int n = nums.size();
        int sol = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0) continue;
            if(m.find(nums[i]) ==m.end())
                sol++;
            m[nums[i]]++; 
    }

        return sol;
    }
};
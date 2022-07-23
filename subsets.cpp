class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> sol = {{}};
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            createSubsets(sol, nums[i]);
        }
        
        return sol;
    }
    
    void createSubsets(vector<vector<int>>& sol, int val){
        int len = sol.size();
        
        for(int i=0; i<len; i++){
            vector<int>temp = sol[i];
            temp.push_back(val);
            sol.push_back(temp);
        }
        return;
    }
};
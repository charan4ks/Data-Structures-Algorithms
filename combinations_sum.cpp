class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> sol; 
        vector<int> comb;
        
        sort(candidates.begin(), candidates.end());
        
        traverse(candidates, sol, target, comb, 0);
        
        return sol;
        
        
    }
    
    void traverse(vector<int>& candidates, vector<vector<int>>& sol, int target, vector<int>& comb, int i){
        
        if(target == 0){
            sol.push_back(comb);
            return;
        }
        
        while(i<candidates.size() && candidates[i] <= target){
            int val = candidates[i];
            comb.push_back(val);
            traverse(candidates, sol, target-val, comb, i);
            i++;
            comb.pop_back();
        }
        
    }
};
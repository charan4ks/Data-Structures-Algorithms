class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n = values.size();
        int sol=0;
        int max_val = values[0];
        
        for(int i=1; i<n; i++){
            int curr = values[i]-i+max_val;
            max_val = max(max_val, values[i] +i);
            sol = max(curr, sol);
        }
        
        return sol;
        
    }
};
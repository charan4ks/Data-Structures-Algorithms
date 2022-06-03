class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int sol=0;
        int min_so_far = INT_MAX;
        
        for(int i=0; i<n; i++){
            int diff = prices[i] - min_so_far;
            min_so_far = min(min_so_far, prices[i]);
            sol= max(sol, diff);
        }
            
        return sol;
    }
};
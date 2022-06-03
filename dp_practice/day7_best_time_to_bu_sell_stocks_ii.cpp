class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cash =0;
        int hold = INT_MIN;
        
        for(int i=0; i<n; i++){
            cash = max(cash, hold+prices[i]);
            hold = max(hold, cash-prices[i]);
        }
        
        return cash;
    }
};
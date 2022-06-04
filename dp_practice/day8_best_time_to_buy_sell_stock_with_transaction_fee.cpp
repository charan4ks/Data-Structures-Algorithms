class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
        
        int cash =0;
        int hold = INT_MIN;
        hold+=fee;
        
        for(int i=0; i<n; i++){
            cash = max(cash, hold+prices[i]-fee);
            hold = max(hold, cash-prices[i]);
        }
        
        return cash;
        
    }
};
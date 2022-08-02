class Solution {
public:
    int sol=INT_MIN;
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n =arr.size();
        vector<int>dp(n);
        recursion(arr, k, 0, dp);
        
        return dp[0];
    }
    
    int recursion(vector<int>& arr, int k, int index, vector<int>& dp){
        int n = arr.size();
        if(index>=n) return 0;

        if(dp[index] != NULL) return dp[index];
        int i=0;
        int temp_sum= 0;
        int max_val = INT_MIN;
        while(index+i<n && i<k){
            
            max_val = max(max_val, arr[index+i]);
            temp_sum = max_val*(i+1);
            int val = temp_sum + recursion(arr, k, index+i+1, dp);
            
            if(dp[index]<val) dp[index] = val;
            i++;
        }
        return dp[index];
        
        
    }
    
};
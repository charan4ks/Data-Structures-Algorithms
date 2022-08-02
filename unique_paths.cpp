class Solution {
public:

    int uniquePaths(int m, int n) {
        
        vector<vector<int>>dp(m, vector<int>(n,-1));
        dp[m-1][n-1] = 1;
        traverse(0,0, m, n, dp);
        return dp[0][0];
    }
    
    int traverse(int row, int col, int m, int n, vector<vector<int>>& dp){
        if(row<0 || col<0 || row>=m || col>=n) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int a = traverse(row+1, col, m, n, dp);
        int b = traverse(row, col+1, m, n, dp);
        
        dp[row][col] = a+b;
        
        return dp[row][col];
    }
};
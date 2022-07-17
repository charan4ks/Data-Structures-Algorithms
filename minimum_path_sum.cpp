class Solution {
public:
    int sol = INT_MAX;
    int m,n;
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        sol = check(grid,dp, 0, 0);
        
        return sol;
        
    }
    
    int check(vector<vector<int>>& grid, vector<vector<int>>& dp, int row, int col){
        
        if(row==m-1 && col == n-1){
            dp[row][col] = grid[row][col];
            return grid[row][col];
        }
        
        if(row<m && col<n){
            if(dp[row][col] != -1) return dp[row][col];
            int num1 = check(grid, dp, row+1, col);
            int num2 = check(grid, dp, row, col+1);
            
            dp[row][col] = min(num1, num2) == INT_MAX ? INT_MAX : min(num1, num2) + grid[row][col];
            
            return dp[row][col];
        }
        
        return  INT_MAX;
    }
};
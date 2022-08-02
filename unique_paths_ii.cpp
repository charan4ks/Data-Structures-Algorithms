class Solution {
public:
    int m,n;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        
        if(obstacleGrid[m-1][n-1] || obstacleGrid[0][0]) return 0;
        
        vector<vector<int>> dp(m, vector<int>(n,-1));
        dp[m-1][n-1] = 1;
        
        traverse(obstacleGrid, dp, 0, 0);
        
        return dp[0][0];
    }
    
    int traverse(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp, int row, int col){
       
        if(row<0 || col<0 || row>=m || col>=n || obstacleGrid[row][col]) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int a = row<m-1 ? traverse(obstacleGrid, dp, row+1, col) : 0;
        int b = col<n-1 ? traverse(obstacleGrid, dp, row, col+1) : 0;
        
        dp[row][col] = a+b;
        
        return dp[row][col];
        
    }
    
};
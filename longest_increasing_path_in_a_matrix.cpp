class Solution {
public:
    int m,n;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        
       int sol=1; 
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(dp[i][j] == 0){
                  int temp =  traverse(matrix, dp, i, j, INT_MIN); 
                }
                
                sol = max(sol, dp[i][j]);
            }
        }
        
        return sol;
    }
    
    int traverse(vector<vector<int>>& matrix, vector<vector<int>>& dp, int row, int col, int val){
        
        if(row<0 || col<0 || row>=m || col>=n || matrix[row][col] <= val ) return 0;
        
        if(dp[row][col] >0) return dp[row][col];
        
        val = matrix[row][col];
        
        int num1 = max(traverse(matrix, dp, row+1, col, val),
                    traverse(matrix, dp, row-1, col, val));
                    
        int num2 = max(traverse(matrix, dp, row, col+1, val),
                       traverse(matrix, dp, row, col-1, val));
        
        dp[row][col] = 1+ max(num1, num2);
        
        return dp[row][col];
        
    }
};
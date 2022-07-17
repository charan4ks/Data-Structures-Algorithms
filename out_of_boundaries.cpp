// Reference Solution


class Solution {
public:
    int mod = 1e9 + 7;
    vector<int> dir = {-1 , 0 , 1 , 0 , -1};
    int solve(int i, int j, int moves , int m , int n,vector<vector<vector<int>>>&dp){
        if(i>=m or j>=n or i<0 or j<0) return 1;
        if(moves==0) return 0;
        if(dp[i][j][moves]!=-1) return dp[i][j][moves];
        int ans = 0;
        for(int k=0 ; k<4 ; k++){
            ans = (ans + solve(i+dir[k] , j+dir[k+1] , moves-1 , m , n,dp))%mod;
        }
        
        return dp[i][j][moves] = ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m , vector<vector<int>>(n , vector<int>(maxMove+1 , -1)));
        return solve(startRow , startColumn , maxMove , m , n,dp);
    }
};
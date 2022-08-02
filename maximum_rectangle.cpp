class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        
        int sol =0;
        
        for(int i=1;i<=m; i++){
            int area = 0;
            stack<int> s;
            for(int j=0; j<=n; j++){
                if(j<n)dp[i][j] = (matrix[i-1][j] == '1' ? 1 + dp[i-1][j] : 0);
                else dp[i][j] = 0;
                
                cout<<dp[i][j]<<' ';
                
                while(!s.empty() && dp[i][s.top()]>dp[i][j]){
                    
                    int index = s.top();
                    int val = dp[i][index];
                    s.pop();
                    int width = s.empty() ? j : j-s.top()-1;
                    area = max(area, val*width);
                }
                    s.push(j);
            }
            cout<<endl;
            
            sol = max(sol, area);
            
        }
        
        return sol;
    }
};
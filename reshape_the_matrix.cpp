class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        if(m*n != r*c) return mat;
        
        vector<vector<int>> sol(r,vector<int>(c));
        
        int p=0,q=0;
    
        
        
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                sol[p][q] = mat[i][j];
                q++;
                if(q==c){
                    p++;
                    q=0;
                }
            }
        }
        
        return sol;
        
    }
};
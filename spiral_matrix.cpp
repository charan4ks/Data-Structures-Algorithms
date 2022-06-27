class Solution {
public:
    vector<int>sol;
    int m,n;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<bool>>visited(m, vector<bool>(n, false));
        int dir =0;
        //right 0, down 1,  left 2, up 3;
        traverse(matrix, visited, 0, 0, dir);
        
        return sol;
        
    }
    
    void traverse(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int i, int j,int& dir){
        
        if(sol.size() >= m*n) return;
        
        if(i>=0 && j>=0 && i<m && j<n && !visited[i][j]){
            sol.push_back(matrix[i][j]);
            visited[i][j] = true;
            if(dir==0) traverse(matrix, visited, i, j+1, dir);
            if(dir==1) traverse(matrix, visited, i+1, j, dir);
            if(dir==2) traverse(matrix, visited, i, j-1, dir);
            if(dir==3) traverse(matrix, visited, i-1, j, dir);
        }else{
            dir++;
            dir = dir%4;
            
            if(dir==0) traverse(matrix, visited, i+1, j+1, dir);
            if(dir==1) traverse(matrix, visited, i+1, j-1, dir);
            if(dir==2) traverse(matrix, visited, i-1, j-1, dir);
            if(dir==3) traverse(matrix, visited, i-1, j+1, dir);
            
        }
        
        return;
        
    }
    
};
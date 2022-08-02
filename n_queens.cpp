class Solution {
public:
    vector<vector<string>> sol;
    
    bool isSafe(vector<string>& board, int row, int col){
        
        int n = board.size();
        
        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q' || board[row][i] == 'Q') return false;
            
            int p1 = row+i, q1 =col+i;
            int p2 = row-i, q2 =col-i;
            int p3 = row+i, q3 =col-i;
            int p4 = row-i, q4 =col+i;
            
            if(p1>=0 && q1>=0 && p1<n && q1<n && board[p1][q1] == 'Q') return false;
            if(p2>=0 && q2>=0 && p2<n && q2<n && board[p2][q2] == 'Q') return false;
            if(p3>=0 && q3>=0 && p3<n && q3<n && board[p3][q3] == 'Q') return false;
            if(p4>=0 && q4>=0 && p4<n && q4<n && board[p4][q4] == 'Q') return false;
            
        }
        return true;
        
    }
    
    void solve(vector<string>& board, int row){
        int n = board.size();
        if(row == n){
            sol.push_back(board);
            return;
        }
        
        for(int i=0; i<n; i++){
            if(!isSafe(board, row, i)) continue;
            board[row][i] = 'Q';
            solve(board, row+1);
             board[row][i] = '.';
        }
        
        return;
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        string word="";
        vector<string>board;
        for(int i=0; i<n;i++){
            word+='.';
        }
        for(int i=0; i<n; i++) board.push_back(word);
        
        solve(board, 0);
        
        return sol;
        
    }
    
};
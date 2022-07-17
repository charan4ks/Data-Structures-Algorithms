class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0; i<9; i++){
            if(!isRowColValid(board, i, i)) return false;
        }
        
        for(int i=0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                bool res = isBoxValid(board, i, j);
                if(!res) return false;
            }
        }
        
        return true;
            
    }
    
    bool isRowColValid(vector<vector<char>>& board, int row, int col){
        unordered_set<int>s;
        unordered_set<int>t;
        
        for(int i=0; i<9; i++){
            int row_val = board[row][i];
            if(s.find(row_val) !=s.end()) return false;
            if(row_val != '.') s.insert(row_val);
            
            int col_val = board[i][col];
            if(t.find(col_val) !=t.end()) return false;
            if(col_val !='.') t.insert(col_val);  
        }

        return true;
        
    }
    
    bool isBoxValid(vector<vector<char>>& board, int row, int col){
        
        unordered_set<int>s;
        
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                int val = board[row+i][col+j];
                if(s.find(val) !=s.end()) return false;
                if(val !='.') s.insert(val);
            } 
        } 
        return true;   
    }
    
};
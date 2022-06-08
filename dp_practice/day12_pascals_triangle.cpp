class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        //int n = numRows.size();
        vector<vector<int>> sol;
        
        for(int i=1; i<=numRows; i++){
            vector<int>row;
            int j=1;
            while(j<=i){
                if(j==1 || j==i)row.push_back(1);
                else{
                    row.push_back(sol[i-2][j-2] + sol[i-2][j-1]);
                }
                j++;
            }
            sol.push_back(row);
        }
        
        return sol;
        
    }
};
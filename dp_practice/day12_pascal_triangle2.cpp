class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> sol;
        
        for(int i=0; i<=rowIndex; i++){
            int j=0;
            vector<int>row;
            while(j<=i){
                if(j==0 || i==j)row.push_back(1);
                else{
                    row.push_back(sol[i-1][j-1] + sol[i-1][j]);
                }
                j++;
            }
            sol.push_back(row);
        }
        
        return sol[rowIndex];
        
    }
};
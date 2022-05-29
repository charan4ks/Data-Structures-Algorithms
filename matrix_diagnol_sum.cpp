class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n =mat.size();
        
        int i=0;
        int sum=0;
        
        while(i<n){
           sum+=mat[i][i];
            sum+=mat[i][n-i-1];
            if(i==n/2 && n%2==1)sum-=mat[i][i];
            i++;
        }
        
        return sum;
        
    }
};
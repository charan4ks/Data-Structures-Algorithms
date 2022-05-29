class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n =coordinates.size();
        
        if(n<2) return false;
        
        int a = coordinates[1][0] - coordinates[0][0];
        int b = coordinates[1][1] - coordinates[0][1];
        
        for(int i=2; i<n;i++){
            
            int c = coordinates[i][0] - coordinates[0][0];
            int d = coordinates[i][1] - coordinates[0][1];
            
            if(a*d != b*c) return false;

        }
        
        return true;
        
    }
};
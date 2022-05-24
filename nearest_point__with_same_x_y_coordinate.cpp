class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int n = points.size();
        int sol = INT_MAX;
        int index = INT_MAX;
        bool c = true;
        int a,b;
        
        for(int i=0; i<n; i++){
            
            a = points[i][0];
            b = points[i][1];
            
            
            if(a == x || b == y){
            c=false;
                if(sol > abs(a-x)+abs(b-y)){
                    sol = abs(a-x)+abs(b-y);
                    index =i;
                }
            }
            
        }
        
        if(c) return -1;
        return index;
        
    }
};
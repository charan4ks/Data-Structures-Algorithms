class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<vector<int>>sol;
        priority_queue<pair<double, int>> pqueue;
        
        int n = points.size();
        
        for(int i=0; i<n; i++){
            int x = points[i][0];
            int y = points[i][1];
            double dist = -1 * sqrt(x*x + y*y);
            pqueue.push({dist,i});
        }
        
        while(k>0){
            pair<double, int>p = pqueue.top();
            pqueue.pop();
            sol.push_back(points[p.second]);
            k--;
        }
        
        return sol;
    }
};
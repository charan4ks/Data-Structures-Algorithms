class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> sol;
        
        int n = intervals.size();
        
        if(n==0) return sol;
        
        sort(intervals.begin(), intervals.end());
        
        int i =1;
        
        sol.push_back(intervals[0]);
        
        int p =0;
        
        while(i<n){
            
            if(sol[p][1] >= intervals[i][0]){
                
                if(sol[p][1] < intervals[i][1])
                sol[p][1] = intervals[i][1];
            }else{
                sol.push_back(intervals[i]);
                p++;
            }
            
            i++;
            
        }
        
        return sol;
        
    }
};
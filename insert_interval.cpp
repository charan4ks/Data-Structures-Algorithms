class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        int n = intervals.size();
        
        vector<vector<int>> sol;
        bool b = true;
        
        for(int i=0; i<n; i++){
            
            if(intervals[i][0] >= newInterval[0] && b){
                sol.push_back(newInterval);
                b= false;
            } 
            
            sol.push_back(intervals[i]);
            
        }
        
        if(sol.size() ==n) sol.push_back(newInterval);
        
        vector<vector<int>> ans;
        
        int index=0, i=1;
        ans.push_back(sol[0]);
        
        while(i<=n){
            //cout<<sol[i][0]<< ' '<<sol[i][1]<<endl;
            if(sol[i][0] <= ans[index][1]){
                ans[index][1] = max(sol[i][1], ans[index][1]);
            }else{
                ans.push_back(sol[i]);
                index++;
            }
            i++;
        }
        

        
        return ans;
        
    }
};
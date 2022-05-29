class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        
        int n = intervals.size();
        
        int a = intervals[0][0],b=intervals[0][1],c,d,ans=0;
        
        for(int i=1; i<n; i++){
            c = intervals[i][0];
            d = intervals[i][1];
            
            if(c<b){
                
                ans++;
                if(b>d){
                    a=c;
                    b=d;
                }
                
            }else{
                a=c;b=d;
            }
        }
        
        return ans;
        
    }
};
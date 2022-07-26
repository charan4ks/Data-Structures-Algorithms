class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();

        int sol = 0;
        stack<int>stc;
        
        for(int i=0; i<=n; i++){

            int curr_height = i==n ? 0 : heights[i];
            //int width = 1;
            //int index =i;
            
            while(!stc.empty() && heights[stc.top()] >curr_height){
                int index = stc.top();
                stc.pop();
                int width = stc.empty() ? i : i - stc.top()-1;
                int area = width* heights[index];
                sol = max(area, sol);
               // cout<< width<<' '<< heights[i] <<" | ";
            }
            
            stc.push(i);
        }
        
        return sol;
        
    }
};
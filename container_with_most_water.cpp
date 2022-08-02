class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int area =0;
        
        int left =0, right = n-1;
        
        while(left<right){
            int top = min(height[left], height[right]);
            area = max(area, (right-left)*top);
            if(height[left] > top) right--;
            else left++;
        }
        
        return area;
        
    }
};
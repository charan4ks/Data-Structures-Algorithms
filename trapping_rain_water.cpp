class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left_array(n);
        vector<int> right_array(n);
        int left_max=0;
        int right_max=0;
        int sol=0;
        
        for(int i=0; i<n; i++){
            left_array[i] = left_max;
            left_max = max(left_max, height[i]);
            right_array[n-1-i] = right_max;
            right_max = max(right_max, height[n-1-i]);
        
        } 
        
        for(int i=0; i<n; i++){
            int min_val = min(left_array[i], right_array[i]);
            if(height[i]<min_val) {
                sol+= (min_val - height[i]);
            }
        }
        return sol;
        
    }
};
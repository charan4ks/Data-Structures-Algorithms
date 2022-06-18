
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();
        vector<double>sol;
        double ans;
        
        int i=0,j=0;
        while(i<m || j<n){
            
            if(j<n &&( i>=m || nums1[i] > nums2[j])){
                sol.push_back(nums2[j]);
                j++;
                }else{
                sol.push_back(nums1[i]);
                i++;
            }
            
        }
        int val = (m+n)/2;
        if((m+n)%2 == 0) {
            
            ans = (sol[val] + sol[val-1])/2;
        }else{
            ans = sol[val];
        }
        
        return ans;
        
        
    }
};
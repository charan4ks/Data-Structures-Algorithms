class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();
        vector<int>sol(m, -1);
        
        for(int i=0; i<m; i++){
            int val = nums1[i];
            bool b = false;
            for(int j=0; j<n; j++){
                if(b && nums2[j] > val) {
                    sol[i] = nums2[j];
                    break;
                }else if (!b && nums2[j] == val){
                    b =true;
                }
                
            }
            
        }
        
        return sol;
        
        
    }
};
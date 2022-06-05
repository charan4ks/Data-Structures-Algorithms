class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol(n, 0);
        
        int start_product = 1, end_product = 1;
        for(int i=0; i<n; i++){
            sol[i] = start_product;
            start_product*=nums[i];
        }
        
        for(int i = n-1; i>=0; i--){
            sol[i] *= end_product;
            end_product *= nums[i];
        }
        
        return sol;
    }
};
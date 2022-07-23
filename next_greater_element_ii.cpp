class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol;
        
        for(int i=0; i<n; i++){
            int val = nums[i];
            int ans = INT_MAX;

            for(int j=i+1; j<n; j++){
                if(nums[j] > val){
                    ans = nums[j];
                    break;
                }
            }
            
            for(int j=0; j<i; j++){
                if(ans <INT_MAX)break;
                if(nums[j] > val){
                    ans = nums[j];
                    break;
                }
            }
            
            if(ans==INT_MAX) ans = -1;
            sol.push_back(ans);
        }
        
        return sol;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        if(n<3) return ans;
        
        for(int i=0; i<n; i++){
            
            if(i==0 || i>0 && nums[i]!=nums[i-1]){
            
            int low = i+1;
            int high = n-1;
            
            while(low<high){
                
                
                if(nums[i] + nums[low] + nums[high] == 0){
                    
                    vector<int> temp = {nums[i], nums[low], nums[high]};
                    
                    ans.push_back(temp);
                    
                    while(low<high && nums[low] == nums[low+1])low++;
                    while(low<high && nums[high] == nums[high-1])high--;
                    
                    
                    low++;
                    high--;
                    
                }
                else if(nums[i] + nums[low] + nums[high] > 0) high--;
                else low++;
                
            }
            
            
        }
    }
        
        return ans;
        
    }
};
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n= nums.size();
        int sum=0;
        int sol=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum==k)sol++;
            int balance = sum-k;
            if(mp.count(balance) > 0){
               sol+=mp[balance]; 
            }
            mp[sum]++;
            
        }
        return sol;
    }
};
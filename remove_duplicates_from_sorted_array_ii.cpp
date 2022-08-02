class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count =1;
        
        if(n<=2) return n;
        int prev = nums[0];
        int left =0,right=0;
        int diff=0;
        int i=1;
        while(i<n-diff){
           // cout<<nums[i]<<' ';
            if(nums[i] == prev){
                count++;
                if(count==3)left=i;
                //cout<<"up";
                
            }else{
                //cout<<"down";
                if(count<=2) left =i;
                prev = nums[i];
                count =1;
                right = i;
                i = left;
                if(right-left >0){
                    diff+=right-left;
                    while(right<n){
                        swap(nums[left],nums[right]);
                        left++;
                        right++;
                    }
                }
            }
           // cout<<endl;
            i++;
        }
        
        if(count>2) diff+=(count-2);
        
        return n-diff;
        
    }
};
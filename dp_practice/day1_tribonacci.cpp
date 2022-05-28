class Solution {
public:
    int tribonacci(int n) {
        
        int prev1=1;
        int prev2 =1;
        int prev3=0;
        if(n==0 || n==1) return n;
        int ans=1;
        
        for(int i=3;i<=n;i++){
            ans = prev1+prev2+prev3;
            prev3=prev2;
            prev2=prev1;
            prev1=ans;
        }
        
        return ans;
        
    }
};
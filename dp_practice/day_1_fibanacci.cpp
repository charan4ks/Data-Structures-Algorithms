class Solution {
public:
    int fib(int n) {
        
        int prev1 =1;
        int prev2 =0;
        int ans = 1;
        
        if(n==0) return 0;
        
        for(int i=2; i<=n;i++){
            ans = prev1+prev2;
            prev2=prev1;
            prev1=ans;

        }
        
        return ans;
    }
};
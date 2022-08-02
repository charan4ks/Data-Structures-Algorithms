class Solution {
public:
    int n;
    int numDecodings(string s) {
        
        n = s.length();
        int sol =0;
        
        vector<int>dp(n+1, -1);
        dp[n] = 1;
        permutation(s, dp, 0);
        
        return dp[0]==-1 ? 0 : dp[0];
        
    }
    
    int permutation(string& s, vector<int>& dp, int index){
        
        if(index>n || s[index] == '0' ) return 0;
        if(dp[index] > -1) return dp[index];

        
        int count = permutation(s, dp, index+1);
        
        if(index+1 <n){
            
            int first_val = s[index];
            int second_val = s[index+1];
            if (first_val <'2' || (first_val =='2' && second_val <= '6') ){

            count+=permutation(s, dp, index+2); 
            }
        
        } 
        dp[index] = count;

        return dp[index];
        
    }
};
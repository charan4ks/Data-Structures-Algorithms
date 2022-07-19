// Optimal One  O(N);
class Solution {
public:
    int longestValidParentheses(string s) {
        int sol=0;
        
        int n = s.length();
        
        int left=0, right=0;
        
        for(int i=0; i<n; i++){
            if(s[i] == '(') left++;
            else right++;
            
            if(left==right)sol = max(sol, right*2);
            if(right>left){
                left=0; right=0;
            }
        }
        
        left=0; right=0;
        
        for(int i=n-1; i>=0; i--){
            if(s[i] == '(') left++;
            else right++;
            
            if(left==right)sol = max(sol, left*2);
            if(left>right){
                left=0; right=0;
            }
        }
        
        return sol;
        
    }
    
};

//O(N*N)  Initial attempt

class Solution {
public:
    int longestValidParentheses(string s) {
        int sol=0;
        
        int len = s.length();
        
        for(int i=0; i<len; i++){
            if(sol> len-i) return sol;
            stack<char>sk;
            sk.push(s[i]);
            int maxy = i;
            for(int j=i+1; j<len; j++){
                char c = sk.empty() ? '-' : sk.top();
                
                if((c == '(' && s[j] == ')'))sk.pop();
                else sk.push(s[j]);
                
                if(sk.empty()) maxy = j;

            }
            if(maxy != i)sol = max(sol, maxy-i+1);
        }
        
        return sol;
        
    }
    
};
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        
        vector<int>sol;
        
        while(x!=0){
            sol.push_back(x%10);
            x =x/10;
        }
        
        int n = sol.size();        
        for(int i=0; i<n/2 ; i++){
            if(sol[i] != sol[n-1-i]) return false;
        }
        
        return true;
    }
};
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



// Approach 2



class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        int num = x;
        
        vector<int>sol;
        int rev=0;
        
        while(x!=0){
           // sol.push_back(x%10);
            if(rev>INT_MAX/10) return false;
            if(rev==INT_MAX/10){
                if(x%10 > INT_MAX%10) return false;
                return true;
            }
            rev*=10;
            rev += (x%10);
            x =x/10;
            
        }
        
        if(rev!= num)  return false;
        
        return true;
    }
};
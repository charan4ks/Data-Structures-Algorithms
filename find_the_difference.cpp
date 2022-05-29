class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = t.length();
        int s1=0,t1=0;
        
        for(int i=0; i<n; i++){
            if(i!=n-1)s1+=s[i];
            t1+=t[i];
        }
        
        //ASIIC character a = 95,b=96....
        // remaining number can be found by subtraction
        
        return t1-s1;
        
    }
};
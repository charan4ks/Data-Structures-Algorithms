class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        int sol=0;
        unordered_map<char, int>m;
        for(int i=0;i<n;i++){
            if(m.find(s[i]) != m.end()){
                    m[s[i]]++;
                    if(m[s[i]] % 2 ==0)sol+=2;
            }else{
                m[s[i]] =1;
            }
        }
        
        if(sol<n)sol++;
        
        return sol;
    }
};
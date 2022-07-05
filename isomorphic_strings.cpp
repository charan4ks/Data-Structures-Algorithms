class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int m = s.length();
        int n = t.length();
        
        if(m!=n) return false;
        
        unordered_map<char, char>mp;
        unordered_map<char, char>mp1;
        
        for(int i=0; i<m; i++){
            
            if(mp.count(t[i]) >0){
                
                if(mp[t[i]] != s[i]) return false;
                
            }else{
                mp[t[i]] = s[i];
            }
        }
        
        for(int i=0; i<m; i++){
            
            if(mp1.count(s[i]) >0){
                
                if(mp1[s[i]] != t[i]) return false;
                
            }else{
                mp1[s[i]] = t[i];
            }
        }
        
        return true;
        
    }
};
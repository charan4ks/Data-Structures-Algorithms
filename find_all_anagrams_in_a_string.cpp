class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char, int>mp;
        vector<int>sol;
        
        for(int i=0; i<p.length(); i++){
            if(mp.count(p[i])>0){
                mp[p[i]]++;
            }else{
                mp[p[i]] = 1;
            }
        }
        
        int n = s.length();
        int len = p.length();
        if(n<p.length())return sol;
        int count =mp.size();
        
        for(int i=0; i<n;i++){
            char letter = s[i];
            if(i<len){
                
                if(mp.count(letter) >0 ){
                    mp[letter]--;
                    if(mp[letter] == 0) count--;
                }
                
            }else{
                if(mp.count(s[i-len]) > 0){
                    mp[s[i-len]]++;
                    if(mp[s[i-len]] == 1)count++;
                }
                
                
               if(mp.count(letter) >0 ){
                    mp[letter]--;
                    if(mp[letter] == 0) count--;
                }
            }
            
            if(count==0) sol.push_back(i-len+1);
        }
        
        return sol;
        
        
    }
};
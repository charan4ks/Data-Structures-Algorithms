class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        int n = s.length();
        string temp="";
        
        vector<string> v;
        
        for(int i=0; i<n;i++){
            
            if(s[i] == ' '){
                if(temp.length()!=0)v.push_back(temp);
                temp = "";
            }else temp+=s[i];
            
            
            if(i==n-1 && temp!="")v.push_back(temp);
            
        }
        
        
        int p = v.size();
        int q = pattern.size();
        if(p!=q)return false;
        
        unordered_map<char, string>m;
        unordered_map<string, char>k;
        
        for(int i=0; i<p; i++){
            
            if(m.count(pattern[i])>0 ){
                if(m[pattern[i]] != v[i]) return false;
            }else{
                m[pattern[i]] = v[i];
            }
            
            
            if(k.count(v[i])>0 ){
                if(k[v[i]] != pattern[i]) return false;
            }else{
                k[v[i]] = pattern[i];
            }
            
        }
        
        return true;
        
        
    }
};
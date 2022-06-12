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


// Approach 2......................................................

class Solution {
public:
    bool wordPattern(string pattern, string s) {
     
     unordered_map<char, string>   mp;
        unordered_set<string> st;
        int set_count=0;
        
        int j=0;
        int len = pattern.length();
        string str = "";
     
     for(int i=0; i<s.length(); i++){
         if(s[i] == ' ' || i == s.length() -1){
             
             if(i == s.length()-1) str+=s[i];
             
             if(mp.count(pattern[j]) > 0){
                 if(mp[pattern[j]] != str) return false;
             }else{
                 mp[pattern[j]] = str;
                 st.insert(str);
                 set_count++;
                 if(set_count!=st.size()) return false;
             }
             j++;
             str = "";
         }else{
             str+=s[i];
         }
     }
        if(j==len) return true;
        return false;
     
    }
};
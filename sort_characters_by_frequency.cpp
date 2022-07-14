class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        
        unordered_map<char, int>m;
        priority_queue<pair<int, char>>p;
            for(int i=0; i<n; i++){
                if(m.find(s[i]) == m.end()) m[s[i]]=1;
                else m[s[i]]++;
            }
            
        for(int i=0; i<n; i++){
            if(m[s[i]]>0) {
                p.push({m[s[i]], s[i]});
                m[s[i]]=0;
                }
        }
        
        string ans ="";
        
        while(!p.empty()){
            pair<int, char>val = p.top();
            p.pop();
            while(val.first>0){
                ans+=val.second;
                val.first--;
            }
        }
        
        return ans;
            
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        string ans = "";
        unordered_map<char, int>m;
        priority_queue<pair<int, char>>p;
        
        int n = s.length();
        
        if(n==1) return s;
        
        for(auto it : s){
            m[it]++;
        }
        
        for(auto it : m){
            p.push({it.second, it.first});
        }
        
        if(p.size() ==1) return ans;
        
        while(p.size()>1){
            int x_count = p.top().first;
            char x = p.top().second;
            p.pop();
            
            int y_count = p.top().first;
            char y = p.top().second;
            p.pop();
            
            ans +=x;
            ans+=y;
            
            x_count--;
            y_count--;
            
            if(x_count!=0) p.push({x_count, x});
            if(y_count!=0) p.push({y_count, y});
            
        }
        
        if(p.size()==1){
            if(p.top().first>1) return "";
            ans+=p.top().second;
        }
        
        return ans;
     
        
        
    }
};
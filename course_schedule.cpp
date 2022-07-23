class Solution {
public:
    unordered_map<int,bool>check;
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        unordered_map<int,vector<int>>m;
        
        for(auto it : prerequisites){
            m[it[0]].push_back(it[1]);
        }
        
        unordered_set<int>visited; 
        
        for(auto it : m){
            if(!checkPre(m, visited, it.first)) return false;
        }
        
        return true;
           
    }
    
    bool checkPre(unordered_map<int,vector<int>>& m, unordered_set<int>& visited, int val){
        
        if(visited.find(val) != visited.end()) return false;
        
        if(check[val]) return true;
        
        if(m.count(val) <=0) return true;
        
        visited.insert(val);
        
        for(int i=0; i<m[val].size(); i++){
            bool b = checkPre(m, visited, m[val][i] );
            if(!b) return false;
            check[m[val][i]] = true;
        }
        visited.erase(val);
        
        return true;
    }
    
};
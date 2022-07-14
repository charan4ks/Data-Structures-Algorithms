class Solution {
public:
    bool ans = false;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>m(n);
        int len = edges.size();
        for(int i=0; i<len; i++){
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<bool>visited(n, false);
        
        traverse(m, visited, source, destination);
        
        return ans;
        
    }
    
    void traverse(vector<vector<int>>& mp, vector<bool>& visited, int i,  int destination){
        
        if(i == destination){
            ans = true;
            return;
        }
        
        if(!visited[i] && !ans){
            visited[i] = true;
           // int length = mp[i].size();
            for(auto j : mp[i]){
                if(!visited[j])
                traverse(mp, visited, j, destination);
            }
        }
        
        return;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        unordered_map<string, int>mp;
        vector<vector<string>> sol;
        
        int index=0;
        
        for(int i=0; i<n; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(mp.find(s) ==mp.end()){
                mp[s] = index;
                index++;
                sol.push_back({strs[i]});
            }else{
                sol[mp[s]].push_back(strs[i]);
            }
            
        }
        
        
        return sol;
        
        
    }
    //Time Complexity
    //0(n*k) n = number of strings , k is max length of a string
    
};
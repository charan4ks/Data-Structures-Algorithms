class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> sol;
        
        dfs(sol, s, 0, 0, "");
        
        return sol;
        
        
    }
    
    void dfs(vector<string>& sol, string& s, int count, int index, string address){
        if(count>4) return;
        
        if(count==4 && index == s.length()) sol.push_back(address);
        
        for(int i=1; i<4; i++){
            if(index+i > s.length())  break;
            string temp = s.substr(index, i);
            int temp_int = stoi(temp);
            if(temp_int >255) continue;
            if(temp[0] =='0' && temp.length()>1) continue;
            dfs(sol, s, count+1, index+i, address + (index==0 ? temp : '.' + temp));
        }
        
        return;
    }
};
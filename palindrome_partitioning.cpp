class Solution {
public:
    vector<vector<string>> sol;
    vector<vector<string>> partition(string s) {
        vector<string>path = {};
        int n = s.length();
        recursion(s, 0, path, n);
        
        return sol;
        
    }
    
    void recursion(string s, int index, vector<string>& path, int n){
        
        if(index==n){
            sol.push_back(path);
            return;
        }
        
        for(int i=index; i<n; i++){
            string temp = s.substr(index, i-index+1);
            if(isPalindrome(s, index, i)){
                path.push_back(temp);
                recursion(s, i+1, path, n);
                path.pop_back();
            }
        }
        
        return;
    }
    
    
    bool isPalindrome(string s, int start, int end){
        while(start<=end){

            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        
        return true;
    }
};
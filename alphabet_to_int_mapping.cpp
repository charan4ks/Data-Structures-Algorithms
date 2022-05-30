class Solution {
public:
    string freqAlphabets(string s) {
        
        int i = s.length() -1;
        string ans = "";
        
        
        while(i>=0){
            if(s[i] == '#'){
                int n = stoi(s.substr(i-2,2));
                char p = (n+96);
                ans = p + ans;
                i = i-3;
            }else{
                int p = s[i] - '0';
                char k = p+96;
                ans = k +ans;
                i--;
            }
        }
        
        return ans;
        
    }
};
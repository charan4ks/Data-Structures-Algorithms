class Solution {
public:
    vector<string> sol;
    vector<string> letterCombinations(string digits) {
        
        vector<string>keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        string str = "";
        
        permutation(digits, keypad, str, 0);
        
        return sol;
    }
    
    void permutation(string& digits, vector<string>& keypad, string str, int i){
        
        if(i>=digits.size()){
            if(str!="") sol.push_back(str);
            return;
        }
        
        int digit = digits[i] - '0';
        
        for(char c : keypad[digit] ){
            permutation(digits, keypad, str+c, i+1);
        }
        
        return;
    }
};
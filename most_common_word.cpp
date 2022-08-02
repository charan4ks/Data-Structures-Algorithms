class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        unordered_map<string, int>m;
        
        for(string s : banned) m[s]++;
        
        int len = paragraph.length();
        
        string temp = "";
        string ans;
        int i=0;
        
        while(paragraph[i]== ' ' && i<len){
            i++;
        }
        unordered_map<string, int>frequency;
        
        while(i<len){
            if(paragraph[i] == ' ' || paragraph[i] == ',' || paragraph[i] == '!' || paragraph[i] == '?' || paragraph[i] == ';' || paragraph[i] == '.' || paragraph[i] == '\''){
                if(m.find(temp)==m.end() && temp.length()>0){
                    frequency[temp]++;
                }
                temp="";
            }else{
                temp+=(tolower(paragraph[i]));
            }
            i++;
        }
        
        if(temp.length()>0){
                if(m.find(temp)==m.end()){
                    frequency[temp]++;
                }
        }
        int num=0;
        for(auto idx : frequency){
            if(idx.second > num ){
                ans = idx.first;
                num =idx.second;
            }
        }
        
        return ans;
        
    }
};
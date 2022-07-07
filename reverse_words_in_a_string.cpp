class Solution {
public:
    string reverseWords(string s) {
        priority_queue<pair<int, string>>p;
        int n = s.length();
        int count =1;
        string ans;
        
        string temp="";
        for(int i=0; i<n; i++){
            if(s[i] == ' ' && temp.length()>0){
                p.push({count,temp});
                count++;
                temp="";
            }else if(s[i] !=' '){
                temp+=s[i];
            }
        }
        
        if(temp.length()>0){
            p.push({count,temp});
        }
        
        bool notFirst = false;
        
        while(!p.empty()){
            if(notFirst){
                ans+=' ';
            }
           pair<int, string> val = p.top();
            ans+=val.second;
            p.pop();
            notFirst = true;
        }
        
        return ans;
    }
};


//--------------------------------Approach2--------------------------------
//Using stack



class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int count =1;
        string ans;
        stack<string>p;
        
        string temp="";
        for(int i=0; i<n; i++){
            if(s[i] == ' ' && temp.length()>0){
                p.push(temp);
                count++;
                temp="";
            }else if(s[i] !=' '){
                temp+=s[i];
            }
        }
        
        if(temp.length()>0){
            p.push(temp);
        }
        
        bool notFirst = false;
        
        while(!p.empty()){
            if(notFirst){
                ans+=' ';
            }
           string val = p.top();
            ans+=val;
            p.pop();
            notFirst = true;
        }
        
        return ans;
    }
};
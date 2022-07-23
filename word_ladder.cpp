class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string, int>>q;
        q.push({beginWord, 1});
        
        unordered_set<string> s(wordList.begin(), wordList.end());
        
        while(!q.empty()){
            
            int len = q.size();
            pair<string, int> p = q.front();
            
            string word = p.first   ;
            s.erase(word);
            if(word==endWord) return p.second;
            q.pop();
            
            for(int i=0; i<word.length(); i++){
                string curr_word = word;
                for(int j=0; j<26; j++){
                    curr_word[i] = 'a' + j;
                    if(s.find(curr_word) == s.end()) continue;
                    q.push({curr_word, p.second+1});
                   
                }
            }
            
        }
        return 0;
    }
};
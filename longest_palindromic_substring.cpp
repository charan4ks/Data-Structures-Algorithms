class Solution {
public:
    int n;
    string longestPalindrome(string s) {
        
        n = s.length();
        int max_len = 0;
        string ans = "";
        
        for(int i=0; i<n; i++){
            int len1 = expandAround(s, i, i);
            int len2 = expandAround(s, i, i+1);
            
            int len = max(len1, len2);
            
            if(len>max_len){
               ans = s.substr(i - (len-1)/2, len);
                max_len = len;
            }
            
        }
        
        return ans;
        
    }
    
    int expandAround(string& s, int left, int right){
        int count=0;
        int len = left==right ? 1: 2;
            while(left>=0 && right<n && s[left] == s[right]){
                count = len;
                left--;
                right++;
                len+=2;
            }
        
        return count;
            
    }
    

};
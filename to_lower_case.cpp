class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0; i <s.length(); i++){
            int temp = s[i];
            if(temp>64 && temp<91)temp+=32;
            s[i] = temp;
        }
        
        return s;
        
    }
};
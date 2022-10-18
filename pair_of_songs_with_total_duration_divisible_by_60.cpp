class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n = time.size();
        unordered_map<int, int >m;

        for(int i=0; i<n; i++){
            time[i] %= 60;
            m[time[i]]++;
            
        }
        
        int sol=0;
        
        if(m[0] >1) {
            int val = m[0];
            sol+= val%2==0 ? (val/2)*(val-1) : (val)*((val-1)/2);
        }
        
        if(m[30]>1){
            int val = m[30];
            sol+= val%2==0 ? (val/2)*(val-1) : (val)*((val-1)/2);
            }
        
        for(int i=0; i<n; i++){
            int val = time[i];

            if(val==30 || val==0 || m[val]==0 || m[60-val]==0) continue;
            sol+= m[val]*m[60-val];
            m[val]=0;
        }
        
        
        return sol;
        
    }
};
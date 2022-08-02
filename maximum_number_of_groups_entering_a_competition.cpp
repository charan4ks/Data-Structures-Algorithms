class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        //prefix sum?
        int n = grades.size();
        
        sort(grades.begin(), grades.end());
        
        int total_len = 0;
        
        int i = 0;
        
        while(total_len<=n){
            i++;
            total_len = i*(i+1)/2;
        }
        
        
        return i-1;
        
        
        
    }
};
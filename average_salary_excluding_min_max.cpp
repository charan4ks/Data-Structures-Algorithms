class Solution {
public:
    double average(vector<int>& salary) {
        
        int n = salary.size();
        int max = INT_MIN;
        int min = INT_MAX;
        double sol=0;
        
        for(int i=0; i<n; i++){
            sol+=salary[i];
            if(max<salary[i]) max = salary[i];
            if(min>salary[i]) min = salary[i];
        }
        sol = (sol-max-min)/(n-2);
        
        return sol;
        
    }
};
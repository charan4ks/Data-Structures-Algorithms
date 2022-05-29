class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        int sol=0;
        
        for(int i=0 ; i<n; i++){
            int j=i;
            while(j<n){
                for(int k=i; k<=j;k++){
                    sol+=arr[k];
                }
                j = j+2;
            }
        }
        
        return sol;
        
    }
};
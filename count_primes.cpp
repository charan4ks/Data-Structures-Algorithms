class Solution {
public:
    int countPrimes(int n) {
        
        if(n<2)return 0;
        
        vector<int>primes(n+1, true);
        
        primes[0] = 0; primes[1] =0;
        
        
        int sol=0;
        
        for(int i=2; i<n; i++){
            
            if(primes[i]){
                sol++;
                
                for(int j= 2*i; j<n; j = j+i ){
                    primes[j] = false;
                }
            }
            
        }
        
        return sol;
        
    }
};
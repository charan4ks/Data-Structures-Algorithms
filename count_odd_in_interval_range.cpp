class Solution {
public:
    int countOdds(int low, int high) {
        
        int count =0;
        
        if(low %2 ==0)low++;
        
        while(low<=high){
            
            count++;
            low+=2;
        }
        
        return count;
        
    }
};

//Optimal approach

class Solution {
public:
    int countOdds(int low, int high) {
        
        int sol;
        
        if(low%2==0 && high%2==0) sol = (high-low)/2;
        else sol = (high-low)/2 +1;
        
        return sol;
    }
};
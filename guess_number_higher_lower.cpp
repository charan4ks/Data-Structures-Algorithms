class Solution {
public:
    int guessNumber(int n) {
    
        int left =1,right =n;
        
        while(left<=right){
            
            int pivot = left + (right-left)/2;
            
            int check = guess(pivot);
            
            if(check == 0) return pivot;
            else if(check == 1) left = pivot+1;
            else right = pivot-1;
            
        }
        
        return -1;
        
    }
};
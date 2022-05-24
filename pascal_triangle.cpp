class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int>sol = {};
        
        for(int i=0; i<=rowIndex; i++){
            
            vector<int> temp(i+1);
            
            for(int j=0; j<=i; j++){
                
                if(j==0 || j == i)temp[j] = 1;
                else{
                    temp[j]= sol[j] + sol[j-1];
                }
                
            }
            
            sol = temp;
            
        }
        
        return sol;  
    }
};
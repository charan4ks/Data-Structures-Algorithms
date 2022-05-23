class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
    int m = matrix.size();
    int n = matrix[0].size();
        
        
    int left =0;
    int right = m-1;
        int pivot;
        
        while(left<=right){
            pivot = left + (right-left)/2;
            if(matrix[pivot][0] == target) return true;
            else if(matrix[pivot][0] > target) right = pivot-1;
            else left = pivot+1;
        }
        
        m = left>0 ? left -1 : left;
        right = n-1;
        left =0;
        
        while(left<=right){
            pivot = left + (right-left)/2;
            if(matrix[m][pivot] == target) return true;
            else if(matrix[m][pivot] > target) right = pivot-1;
            else left = pivot+1;
        }
        
        return false;
        
        
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        
        for(int i=1; i<n-1; i++){            
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]) return i;            
        }       
        return -1;   
    }
};

// OPTIMAL: Binary search log(n) time complexity

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int left =0, right = arr.size()-1;
        
        int pivot;
        
        while(left<right){
            
            pivot = left + (right-left)/2;
            
            if(arr[pivot] < arr[pivot+1])left = pivot+1;
            else right = pivot;   
        }
        
        return left;
    }
};
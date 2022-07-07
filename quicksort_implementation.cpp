int partition(vector<int>& arr, int lb, int ub) {
    int pivot = arr[lb];
    
    int start = lb;
    int end = ub;
    
    while(start<end){
        while(arr[start]<= pivot)start++;
        
        while(arr[end]>pivot) end--;
        
        if(start<end)swap(arr[start], arr[end]);
    }
    
    swap(arr[lb], arr[end]);
    
    return end;
}

void quickSortAlgo(vector<int>& arr, int lb, int ub){
    if(lb <ub){
       int loc = partition(arr, lb, ub); 
       quickSortAlgo(arr, lb, loc-1);
       quickSortAlgo(arr, loc+1, ub);
       
    }
    
    return;
} 

vector<int> quickSort(vector<int> arr) {
    
    int lb = 0;
    int ub = arr.size()-1;
    
    quickSortAlgo(arr, lb, ub);
    
    return arr;
}
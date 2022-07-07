// Merge Sort Implementation
#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

void merge(vector<int>& arr, int lb, int mid, int ub){

    vector<int>temp;

    int first = lb;
    int second = mid+1;

    while(first<=mid && second<=ub){
        if(arr[first]<arr[second]){
            temp.push_back(arr[first]);
            first++;
        }else{
            temp.push_back(arr[second]);
            second++;
        }
    }

    if(first>mid){
        while(second<=ub){
            temp.push_back(arr[second]);
            second++;
        }
    }else{
            while(first<=mid){
            temp.push_back(arr[first]);
            first++;
        }
    }

    for(int i=lb; i<=ub; i++){
        arr[i] = temp[i-lb];
    }

    return;
}


void mergeSort(vector<int>& arr, int lb, int ub){

    if(lb<ub){
    int mid = (lb+ub)/2;
    mergeSort(arr, lb, mid);
    mergeSort(arr, mid+1, ub);
    merge(arr, lb, mid, ub);
    }

    return;

}

int main() {
    // Write C++ code here
    int n;
    cin>>n;

    int i=0;
    vector<int>arr(n);

    while(i<n){
        cin>>arr[i];
        i++;
    }
    
    mergeSort(arr, 0, n-1);

    i=0;

    while(i<n){
        cout<<arr[i]<<' ';
        i++;
    }

    cout << "\nDone!";
    return 0;
}
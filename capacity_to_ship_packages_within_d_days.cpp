class Solution {
public:
    int n;
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        n = weights.size();
        
        int min_val = 0, max_val = 0;
        
        for(auto weight : weights){
            max_val+=weight;
            min_val = max(min_val, weight);
        }
        
        return binarySearch(weights, days, min_val, max_val);
        
        
    }
    
    int binarySearch(vector<int>& weights, int days, int left, int right){
        
        
        
        while(left<=right){
            int pivot = left + (right-left)/2;
            bool check = checkCapacity(weights, days, pivot);
            if(check)right = pivot-1;
            else left = pivot+1;
        }
        
        return left;
    }
    
    bool checkCapacity(vector<int>& weights, int days, int capacity){
        
        int i=0;
        int prev=weights[i];
        i++;

        while(i<n){
            prev+=weights[i];
            if(prev>capacity){
                days--;
                prev = weights[i];
            }
            
            i++;
        }
        if(days<=0) return false;
        
        return true;
        
    }
    
};
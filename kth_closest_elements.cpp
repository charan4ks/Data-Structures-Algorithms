class Solution {
public:
    int target;
    typedef pair<int , int > p;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        target = k;
        int n = arr.size();
        priority_queue<p, vector<p>, greater<p>> q;
        vector<int> sol;
        
        for(int i=0; i<n; i++){
            int first = abs(arr[i] - x);

            q.push({first,arr[i]});
        }
        
        for(int i=0; i<k; i++){
            p p1 = q.top();
            int val = p1.second;
            sol.push_back(val);
            q.pop();
        }
        
        sort(sol.begin(), sol.end());
        
        return sol;
    }
    
};



// o(n+k)
// Approach 2......................................................

class Solution {
public:

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>sol;
        
        int n = arr.size();
        
        if(x<=arr[0]){
            int i=0;
            while(sol.size()<k){
                sol.push_back(arr[i]);
                i++;
            }
            return sol;
        }
        
        if(x>=arr[n-1]){
            int i=n-1;
            while(sol.size()<k){
                sol.push_back(arr[i]);
                i--;
            }
            sort(sol.begin(), sol.end());
            return sol;
        }
        
        
        
        for(int i=0; i<n; i++){
            if(arr[i] >= x){
                int a=i-1;
                int b=i;
                int diff1 = INT_MAX;
                int diff2 = INT_MAX;
                
                while(sol.size()<k){
                    int diff1 = INT_MAX;
                    int diff2 = INT_MAX;
                    if(a>=0) diff1 = abs(arr[a]-x);
                    if(b<n) diff2 = abs(arr[b]-x);
                    
                    if(diff1<=diff2){
                        sol.push_back(arr[a]);
                        a--;
                    }else{
                        sol.push_back(arr[b]);
                        b++;
                    }
                }
                sort(sol.begin(), sol.end());
                return sol;
            }
        }
        
        return sol;
    }
    
};
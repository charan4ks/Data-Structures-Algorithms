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
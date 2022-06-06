class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        int arr[26]={-1};
        vector<int> sol;
        int last = 0;
        for(int i=0; i<n; i++){
            int letter = s[i] - 'a';
            if(arr[letter]!=-1){
                arr[letter] = i;
            }
            else{
                arr[letter] = i;
            }
        }
        
        int max_index =0;
       // int last=0;
        
        for(int i=0; i<n; i++){
            int letter = s[i] - 'a';
            max_index =max(max_index, arr[letter]); 
            if(max_index == i){
                sol.push_back(max_index - last +1 );
                last = max_index+1;
            }
        }
        
        return sol;
        
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>sol;
        int i = digits.size()-1;
        int carry =1;
        
        while(i>=0){
            int curr = digits[i];
            curr = digits[i] + carry;
            int val = curr %10;
            sol.push_back(val);
            carry = curr/10;
            i--;
        }
        
        if(carry!=0) sol.push_back(carry);
        
        reverse(sol.begin(), sol.end());
        
        return sol;
    }
};
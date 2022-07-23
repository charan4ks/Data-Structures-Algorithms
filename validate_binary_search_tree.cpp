class Solution {
public:
    vector<int>temp;
    bool isValidBST(TreeNode* root) {
        
        recursion(root);
        
        for(int i=1; i<temp.size(); i++){
            if(temp[i-1] >= temp[i]) return false;
        }
        
        return true;
    }
    
    void recursion(TreeNode* root){
        if(root ==NULL) return;
        recursion(root->left);
        temp.push_back(root->val);
        recursion(root->right);
        
        return;
    }
};
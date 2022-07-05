/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int max_val = INT_MIN;
        
        int value = traverse(root, max_val);
        
        max_val = max(max_val, value);
        return max_val;
        
        
    }
    
    int traverse(TreeNode* root, int& max_val){
        
        if(root == NULL) return 0;
        
        int left =traverse(root->left, max_val );
        int right = traverse(root->right, max_val);
        
        max_val = max(max_val, max(left+right+root->val, root->val));
        max_val = max(max_val, max(left+root->val,right+root->val ));
        return max(root->val, max(left+root->val,right+root->val) );
    }
};
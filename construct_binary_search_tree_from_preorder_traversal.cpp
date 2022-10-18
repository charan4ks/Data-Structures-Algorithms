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
    int n;
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        n = preorder.size();
        int index =0;
        return build(preorder, index, INT_MIN, INT_MAX);
    }
    
    TreeNode* build(vector<int>& preorder, int& index,int min_val, int max_val){
        
        int val = preorder[index];
        
        TreeNode* tree = new TreeNode(val);
        index++;
        
        if(index<n && preorder[index]>min_val && preorder[index]<max_val && preorder[index]<val)
            tree->left = build(preorder, index, min_val, val);
        if(index<n && preorder[index]>min_val && preorder[index]<max_val && preorder[index]>val) 
            tree->right = build(preorder, index, val, max_val);
        
        return tree;
         
    }
    
};
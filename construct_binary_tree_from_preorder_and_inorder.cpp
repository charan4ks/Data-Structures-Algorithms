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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int index=0;
        
        return build(preorder, inorder, index, 0, inorder.size() -1);
    }
    
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& index, int left, int right){
        
        if(left>right) return NULL;
        int val = preorder[index];
        int pivot = left;
        while(inorder[pivot] != val) pivot++;
        index++;
        
        TreeNode* tree = new TreeNode(val);
        tree->left = build(preorder, inorder, index, left, pivot-1);
        tree->right = build(preorder, inorder, index, pivot+1, right); 
        
        return tree;
        
    }
};
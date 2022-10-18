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
    unordered_map<int, int>m;
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        n = postorder.size();
        for(int i=0; i<n; i++) m[inorder[i]] = i;
        int index = n-1;
        return build(postorder, index, 0, n-1);
    }
    
    TreeNode* build(vector<int>& postorder, int& index, int left, int right){
        if(left>right) return {NULL};
        int val = postorder[index];
        int pivot = m[val];
        index--;
        
        TreeNode* tree = new TreeNode(val);
        
        tree->right = build(postorder, index, pivot+1, right);
        tree->left = build(postorder, index, left, pivot-1);
        
        return tree;
    }
    
};

//inorder       9 3 15 20 7
//postorder     9 15 7 20 3

// left  ->  right  ->  root
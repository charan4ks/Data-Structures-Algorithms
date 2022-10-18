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
    unordered_map<int, int>post;
    int n;
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        n= preorder.size();
        for(int i=0; i<n; i++)post[postorder[i]] = i;
        int index =0;
        return build(preorder, index);
        
    }
    
    TreeNode* build(vector<int>& preorder, int& index){
        int val = preorder[index];
        
        TreeNode* tree = new TreeNode(val);
        index++;
        
        if(index<n && post[val] > post[preorder[index]]){
            tree->left = build(preorder, index);
        }else return tree;
        
        if(index<n && post[val]>post[preorder[index]]){
            tree->right = build(preorder, index);
        }
        
        return tree;
        
    }
};
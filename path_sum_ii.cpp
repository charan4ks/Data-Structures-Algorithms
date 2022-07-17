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
    vector<vector<int>> sol;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int>path;
        traverse(root, 0, targetSum, path);
        
        return sol;
    }
    
    void traverse(TreeNode* root, int sum, int& targetSum, vector<int>path){
        if(root == NULL) return;
        
        sum+=root->val;
        path.push_back(root->val);
        
        if(sum == targetSum && root->left ==NULL && root->right == NULL ){
            sol.push_back(path);
            return;
        }
        
        traverse(root->left, sum, targetSum, path);
        traverse(root->right, sum, targetSum, path);
        
        return;
        
    }
};
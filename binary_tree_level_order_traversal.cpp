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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>sol;
        
        queue<TreeNode*> q;
        
        if(root == NULL) return sol;
        
        q.push(root);
        
        while(!q.empty()){
            
            int len = q.size();
            
            vector<int>row;
            
            for(int i=0; i<len; i++){
                TreeNode* node = q.front();
                q.pop();
                row.push_back(node->val);
                if(node->left !=NULL)q.push(node->left);
                if(node->right !=NULL)q.push(node->right);
            }
            
            sol.push_back(row);
        }
        
        return sol;
    }
};
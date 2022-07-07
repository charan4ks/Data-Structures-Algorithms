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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>sol;
        TreeNode* node = root;
        
        queue<TreeNode*>q;
        
        if(node == NULL) return sol;
        
        q.push(node);
        
        bool leftToRight = true;
        
        while(!q.empty()){
            
            vector<int>arr;
            int n = q.size();
            
            for(int i=0; i<n; i++){
                node = q.front();
                q.pop();
                
                arr.push_back(node->val);
                
                if(node->left !=NULL) q.push(node->left);
                if(node->right !=NULL) q.push(node->right);
                //if(node->left !=NULL && !leftToRight) q.push(node->left);
                
            }
            if(!leftToRight) reverse(arr.begin(), arr.end());
            sol.push_back(arr);
            leftToRight = !leftToRight;
        }
        
        return sol;
        
    }
};
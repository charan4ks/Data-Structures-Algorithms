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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> sol;
        
         TreeNode* node = root;
    
    if(root==NULL)return sol;
    
    queue<TreeNode*>q;
    
    q.push(node);    
    
    int index=-1;
    
    
    while(!q.empty()){
        int len = q.size();
        
        index++;
        
        vector<int>arr;
        
        for(int i=0; i<len; i++){
        node = q.front();
        q.pop();
        arr.push_back(node->val);
        
        if(node->left !=NULL)  q.push(node->left);
        if(node->right !=NULL) q.push(node->right);

            } 
        
        if(arr.size()>0)sol.push_back(arr);
        }
        
        reverse(sol.begin(), sol.end());
    
   
    return sol;
        
         }
    
    
    
};
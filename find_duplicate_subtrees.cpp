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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      vector<TreeNode*> ans;
        unordered_map<string, int>mp;
        string temp = postOrderTraversal(mp, root, ans);
        return ans;
    }
    
    string postOrderTraversal(unordered_map<string, int>& mp, TreeNode* root, vector<TreeNode*>& ans ){
        
        if(root== NULL) return "";
        
            string left_str = root->left ? postOrderTraversal(mp, root->left, ans) : "";
            string right_str = root->right ? postOrderTraversal(mp, root->right, ans) : "";
            string temp = left_str+ "." + right_str + "." + to_string(root->val);
            
            if(mp.find(temp) != mp.end()){
                if(mp[temp] ==1) {
                    ans.push_back(root);
                    mp[temp]++;
                }
            }else{
                mp[temp]++;
            }
            
        
        return temp;
    }
    
};
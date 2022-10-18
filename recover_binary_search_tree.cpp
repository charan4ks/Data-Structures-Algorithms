class Solution {
public:
    TreeNode* prev_element;
    TreeNode* first_node;
    TreeNode* second_node;
    void recoverTree(TreeNode* root) {
        
        traverse(root);
        
        int temp = first_node->val;
        first_node->val = second_node->val;
        second_node ->val = temp;
        
        return;
    }
    
    void traverse(TreeNode* root){
        if(!root) return;
        
        traverse(root->left);
        
        if(first_node ==NULL && prev_element && prev_element->val >= root->val) first_node = prev_element;
        
        if(first_node && prev_element->val >= root->val){
            second_node = root;
        }
        
        prev_element = root;
        
        traverse(root->right);
        
        return;
        
    }
};
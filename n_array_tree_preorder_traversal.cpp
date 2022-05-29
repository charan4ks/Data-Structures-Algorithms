/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
        vector<int> sol;
        
        traverse(root, sol);
        
        return sol;
        
        
    }
    
    void traverse(Node* node, vector<int>& sol){
        if(node==NULL) return;
        sol.push_back(node->val);
        vector<Node*> v = node->children;
        for(int i=0;i<v.size(); i++){
            traverse(v[i], sol);
        }
        return;
    }
};
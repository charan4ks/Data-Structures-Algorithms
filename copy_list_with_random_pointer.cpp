class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node*, Node*>m;
        
        Node* node = head;
        
        while(node!=NULL){
            m[node] = new Node(node->val);
            node = node->next;
        }
        
        node = head;
        
        while(node!=NULL){
            Node* newNode = m[node];
            newNode->next = m[node->next];
            newNode->random = m[node->random];
            node = node->next;
        }
        
        return m[head];
        
    }
};
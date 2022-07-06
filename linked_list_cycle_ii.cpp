/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool>m;
        ListNode* node = head;
        
        while(node !=NULL ){
            if(m[node]){
                return node;
            }else{
                m[node] = true;
            }
            
            node = node->next;
        }
        
        //ListNode* sol;
        
        return NULL;
    }
};
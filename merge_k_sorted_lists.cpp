/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* node;
        ListNode* curr;
        priority_queue<pair<int, ListNode*>>pq;
        
        if(lists.size() ==0) return NULL;
        
        for(int i=0; i<lists.size(); i++){
            
            if(lists[i]!=NULL)pq.push({-1 * lists[i]->val, lists[i] });
            
        }
        if(pq.empty()) return NULL;
        node = pq.top().second;
        ListNode* head = node;
        pq.pop();
        curr = node;
        node = node->next;
        if(node!=NULL)
        pq.push({-1* node->val, node });
        while(!pq.empty()){
            node = pq.top().second;
            pq.pop();
            curr->next = node;
            curr = node;
            node = node->next;
            if(node !=NULL)
                        pq.push({-1*node->val, node });
            
        }
        
        return head;
        
    }
};
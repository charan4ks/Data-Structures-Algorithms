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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL) return head;
        
        ListNode* node = head;
        ListNode* root = node;
        ListNode* prev ;
        
        int n =0;
        
        while(node!=NULL){
            n++;
            node = node->next;
        }
        
        k = n - ( k%n);
        
        if(k!=n){
            cout<<k;
        
        node = head;
        
        while(node!=NULL){
            k--;
            prev = node;
            node = node->next;
            if(k==0) {
                root = node;
                prev->next = NULL;
            }
        }
        
        prev->next = head;
        }
        
        return root;
    }
};
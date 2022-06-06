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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = nullptr;
        ListNode* node= nullptr;
        ListNode* prev= nullptr;
        int carry=0;
        
        // if(l1==NULL || L2==NULL){
        // return l1==NULL ? l2 : l1;
        // }
        
        
        while(l1!=NULL || l2!=NULL || carry!=0){
            int x = (l1!=NULL) ? l1->val : 0;
            int y = (l2!=NULL) ? l2->val : 0;
            
            int sum = carry+x+y;
            carry = sum/10;
            sum%=10;
            node = new ListNode(sum);
            if(prev !=NULL)prev->next = node;
            else head = node;
            prev = node;
            if(l1!=NULL)l1= l1->next;
            if(l2!=NULL)l2= l2->next;
        }
        
        return head;
        
    }
};
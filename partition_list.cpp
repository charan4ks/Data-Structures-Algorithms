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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node = head;
        queue<int>left_arr;
        queue<int>right_arr;
        while(node!=NULL){
            if(node->val <x)left_arr.push(node->val);
            else right_arr.push(node->val);
            node = node->next;
        }
        node = head;
        
        while(node!=NULL){
            if(!left_arr.empty()){
                int val = left_arr.front();
                node->val = val;
                left_arr.pop();
            }else{
                int val = right_arr.front();
                node->val = val;
                right_arr.pop();
            }
            
            node = node->next;
            
        }
        
        return head;
    }
};
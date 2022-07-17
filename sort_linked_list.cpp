class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* node = head;
        vector<int> temp;
        
        while(node!=NULL){
            temp.push_back(node->val);
            node = node->next;
        }
        
        sort(temp.begin(), temp.end());
        
        node = head;
        int i=0;
        
        while(node!=NULL){
            node->val = temp[i];
            node = node->next;
            i++;
        }
        
        return head;
        
    }
};
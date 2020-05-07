class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
            ListNode* curr = head;
            ListNode* p = nullptr;
            ListNode* n = nullptr;
            while(curr != nullptr){
                n = curr -> next;
                curr -> next = p;
                p=curr;
                curr = n;
            }
        
        return p;
    }
};

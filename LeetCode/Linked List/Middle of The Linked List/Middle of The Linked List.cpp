ListNode* middleNode(ListNode* head) {
       ListNode* curr = head;
       ListNode* temp = head;
       while(temp != nullptr && temp -> next != nullptr){
           curr = curr -> next;
           temp = temp -> next -> next;
       }
       return curr;
}

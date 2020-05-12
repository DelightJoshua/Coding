ListNode* deleteDuplicates(ListNode* head) {
       if(head != nullptr){
       ListNode* curr;
       curr = head;
       ListNode* temp;
       temp = head;
       temp = temp -> next;
       while(temp != nullptr){
           if(curr -> val == temp -> val){
               ListNode* delPtr = NULL;
               delPtr = temp;
               temp = temp -> next;
               curr -> next = temp;
               delete delPtr;
           }
           else{
               curr = temp;
               temp = temp -> next;
           }
       }
       }
               return head;
}

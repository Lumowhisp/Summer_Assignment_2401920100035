
 struct ListNode* middleNode(struct ListNode* head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(fast && fast ->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

    
}
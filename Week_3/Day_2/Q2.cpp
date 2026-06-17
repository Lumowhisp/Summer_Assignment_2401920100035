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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            //finding size of linkedList
            ListNode* temp=head;
            int size=0;
            while(temp!=NULL){
                temp=temp->next;
                size++;
            }
            int nodeToStop=size-n;
            ListNode* temp1=head;
            ListNode* dummy=new ListNode(-1);
            ListNode* temp2=dummy;
            while(nodeToStop--){
                temp2->next=temp1;
                temp1=temp1->next;
                temp2=temp2->next;
            } 
            temp2->next=temp1->next;
            return dummy->next;   
        }
    };
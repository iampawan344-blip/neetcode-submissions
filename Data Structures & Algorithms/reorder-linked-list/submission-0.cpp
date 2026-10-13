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

    ListNode* reve(ListNode* slow){
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        ListNode* fut=nullptr;
        ListNode* temp=slow;

        while(curr!=nullptr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }return prev;

    }
    void reorderList(ListNode* head) {

        ListNode*slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }ListNode* rev=reve(slow);
        ListNode*curr=head;
        while(rev->next!=nullptr){
            ListNode* tempcurr=curr->next;
            curr->next=rev;
            ListNode*temprev=rev->next;
           rev->next=tempcurr;
           curr=tempcurr;
           rev=temprev;

        }


        
    }
};
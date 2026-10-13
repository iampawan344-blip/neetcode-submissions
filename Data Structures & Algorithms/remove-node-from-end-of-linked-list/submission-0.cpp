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

        int count=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }if(count==n){
            ListNode*m=head->next;
            delete head;
            return m;
        }int c=count-n;
        ListNode*temp1=head;
        ListNode*prev=nullptr;
        while(c--){
         prev = temp1;
         temp1 = temp1->next;
        }prev->next=temp1->next;
        delete temp1;
        return head;
        
    }
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* dummy = new ListNode(-1);
        int carry = 0;
        ListNode* curr = dummy;

        while (t1 != nullptr || t2 != nullptr || carry) {
            int sum = carry;

            if (t1) sum += t1->val;
            if (t2) sum += t2->val;

            curr->next = new ListNode(sum % 10);
            carry = sum / 10;

            curr = curr->next;

            if (t1) t1 = t1->next;
            if (t2) t2 = t2->next;
        }

        return dummy->next;
    }
};
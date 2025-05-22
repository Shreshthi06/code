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
        ListNode* pivot = new ListNode(0);
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        ListNode* dummy1 = dummy;
        ListNode* pivot1 = pivot;

        while (curr) {
            if (curr->val < x) {
                ListNode* temp = new ListNode(curr->val);
                dummy1->next = temp;
                dummy1 = dummy1->next;
            }
            curr = curr->next;
        }
        curr = head;
        while (curr) {
            if (curr->val >= x) {
                pivot1->next = curr;
                pivot1 = pivot1->next;
            }
            curr = curr->next;
        }
        pivot1->next = nullptr;
        dummy1->next = pivot->next;
        return dummy->next;
    }

}
;
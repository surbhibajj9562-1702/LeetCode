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
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If removing the first node
        if (fast == nullptr) {
            return head->next;
        }

        // Move both pointers
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Delete nth node from end
        slow->next = slow->next->next;

        return head;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tempHead = head;

        while (tempHead != nullptr && tempHead->next != nullptr) {
            if (tempHead->next->val == tempHead->val) {
                ListNode* temp = tempHead->next;
                tempHead->next = tempHead->next->next;
                delete temp;
            }
            else {
                tempHead = tempHead->next;
            }
        }

        return head;
    }
};
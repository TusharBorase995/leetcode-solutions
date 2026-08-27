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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* tempHead = head;

        while (tempHead != nullptr && tempHead->next != nullptr) {

            if (tempHead->next->val == val) {
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
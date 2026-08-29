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
        int count =0;
        int pos;
        ListNode* newHead = head;
        while(newHead!=nullptr){
            count++;
            newHead = newHead->next;
        }
        pos = count - n;   // i need to delete next of pos
        
        int num=0;

        if(pos == 0){
            return head->next;
        }

        ListNode* curr = head;
        while(curr!=nullptr){
            num++;
            if(num == pos){
                curr->next = curr->next->next;
                curr = curr->next;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
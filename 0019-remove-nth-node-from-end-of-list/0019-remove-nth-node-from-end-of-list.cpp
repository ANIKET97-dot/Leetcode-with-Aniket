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

        ListNode* curr = head;
        int cnt = 0;

        while(curr != nullptr){
            cnt++;
            curr = curr->next;
        }
        int pos = cnt - n + 1;
        if(pos == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int cnt2 = 1;
        curr = head;
        while(curr != nullptr && cnt2 < pos - 1) {
            curr = curr->next;
            cnt2++;
        }
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        return head;
    }
};
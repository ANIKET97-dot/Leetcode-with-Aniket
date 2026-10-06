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
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == nullptr || head-> next == nullptr){
            return head;
        }
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr){
            cnt++;
            temp = temp-> next;
        }

        if (k % cnt == 0){
            return head;
        }
        k = k % cnt;
        if (k == 0){
            return head;
        }

        temp = head;

        while(temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp-> next = head;
        int pos = cnt - k;

        ListNode* newTail = head;
        for(int i = 1; i < pos; i++) {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;

    }
};
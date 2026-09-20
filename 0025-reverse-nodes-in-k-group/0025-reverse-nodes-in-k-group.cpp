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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr){
            return head;
        }
        ListNode* temp = head;

        for (int i = 0; i < k; i++){
            if (temp == nullptr){
                return head;
            }
            temp = temp-> next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        int cnt = 0;

        while (curr!= nullptr && cnt < k){
            next = curr-> next;
            curr-> next = prev;

            prev = curr;
            curr = next;

            cnt++;
        }
        head-> next = reverseKGroup(next, k);
        return prev;
    }
};
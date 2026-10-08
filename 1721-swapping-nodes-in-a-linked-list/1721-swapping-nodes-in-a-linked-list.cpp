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
    ListNode* swapNodes(ListNode* head, int k) {
        // if (head == nullptr || head-> next == nullptr){
        //     return head;
        // }
        ListNode* temp = head;
        for (int i = 1; i < k; i++){
            temp = temp-> next;
        }
        ListNode* first = head;
        ListNode* second = temp;

        while (second-> next != nullptr){
            first = first-> next;
            second = second-> next;
        }

        int val = temp-> val;
        temp-> val = first-> val;
        first-> val = val;
        return head;
    }
};
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
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr)
            return head;

        // Dummy nodes for two separate lists
        ListNode* oddHead = new ListNode(0);
        ListNode* evenHead = new ListNode(0);

        ListNode* odd = oddHead;
        ListNode* even = evenHead;

        ListNode* temp = head;
        int index = 1;

        while(temp != nullptr) {

            if(index % 2 == 1) {
                odd->next = new ListNode(temp->val);
                odd = odd->next;
            }
            else {
                even->next = new ListNode(temp->val);
                even = even->next;
            }

            temp = temp->next;
            index++;
        }

        // Connect odd list with even list
        odd->next = evenHead->next;

        return oddHead->next;
    }
};
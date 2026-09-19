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
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {

//         //if head = null
//         if (head == nullptr){
//             return nullptr;
//         }
//         //if head contains the value

//         if (head-> val == val){
//             ListNode* temp = head;
//             head = head-> next;
//             delete temp;
//             return head;
//         }

//         ListNode* temp = head;

//         for (int i = 0; temp-> next != nullptr && temp-> next-> val != val; i++){
//             temp = temp-> next;
//         }
//         if (temp-> next == nullptr){
//             return nullptr;
//         }
//         ListNode* deleteNode = temp-> next;
//         temp-> next = deleteNode-> next;
//         delete deleteNode;
//     }
//      return head;
    
// };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* temp = dummy;

        while (temp->next != NULL) {

            if (temp->next->val == val) {

                ListNode* deleteNode = temp->next;

                temp->next = deleteNode->next;

                delete deleteNode;
            }
            else {
                temp = temp->next;
            }
        }

        head = dummy->next;

        delete dummy;

        return head;
    }
};
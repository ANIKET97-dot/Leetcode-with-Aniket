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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        ListNode* temp = list1;

        while (temp != nullptr){
            arr.push_back(temp-> val);
            temp = temp-> next;
        }

        temp = list2;

        while (temp != nullptr){
            arr.push_back(temp-> val);
            temp = temp-> next;
        }

        sort(arr.begin(), arr.end());

        if (arr.size() == 0){
            return nullptr;
        }

        ListNode* head = new ListNode(arr[0]);
        temp = head;

        for(int i = 1; i < arr.size(); i++) {
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }

        return head;

    }
};
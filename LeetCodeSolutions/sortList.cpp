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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr) return head;
        vector<int> list;
        ListNode* head2 = head;
        ListNode* head3 = head2;
        while(head != nullptr)
        {
            list.push_back(head->val);
            head = head->next;
        }
        sort(list.begin(), list.end());
        int i = 0;

        while(head2 != nullptr)
        {
            head2->val = list[i];
            head2 = head2->next;
            i++;
        }
        return head3;
    }
};
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
    ListNode* reverseList(ListNode* head) 
    {

        ListNode* current = head;
        ListNode* current2 = head;
        vector<int> a;
        while (current!=nullptr)
        {
            a.push_back(current->val);
            current = current->next;
        }
        reverse(a.begin(), a.end());
        int counter = 0;
        while(head!=nullptr)
        {
            head->val = a[counter];
            head = head->next;
            counter++;
        }
        return current2;
    }
};
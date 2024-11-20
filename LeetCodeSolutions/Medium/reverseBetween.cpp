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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* test = head;
        ListNode* test2 = head;
        vector<string> a;
        while(test!=nullptr)
        {
            a.push_back(to_string(test->val));
            test = test->next;
        }
        reverse(a.begin() + left-1, a.begin() + right);        
        int counter = 0;
        while(test2!=nullptr)
        {
            test2->val=stoi(a[counter]);
            test2 = test2->next;
            counter++;
        }
        return head;
    }
};
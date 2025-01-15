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
    ListNode* partition(ListNode* head, int x) {
        ListNode* test1 = head;
        ListNode* test2 = head;
        vector<int> less;
        vector<int> other;
        while(head!=nullptr)
        {
            if(head->val < x) 
            {
                less.push_back(head->val);
            }
            else{
                other.push_back(head->val);
            }
            head = head->next;
        }
        for(int i = 0; i < less.size();i++)
        {
            test1->val = less[i];
            test1=test1->next;
        }
        for(int i = 0; i < other.size();i++)
        {
            test1->val = other[i];
            test1=test1->next;
        }
        return test2;
    }
};
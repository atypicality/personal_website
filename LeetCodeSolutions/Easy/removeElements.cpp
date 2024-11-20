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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        ListNode* test = head;
        ListNode* test2 = head;
        vector<int> b;
        while(head!=nullptr)
        {
            if(head->val!=val) b.push_back(head->val); 
            head = head->next;
        }
        int counter = 0;
        if(b.size()==0)
        {
            test = nullptr;
            return test;
        }
        for(int i = 0; i < b.size()-1; i++)
        {
            test->val = b[i];
            test = test->next;
            counter++;
        }
        if(counter!=b.size())
        {
            test->val=b[b.size()-1];
            test->next=nullptr;
            test=test->next;
        };
        return test2;
        
    }
};
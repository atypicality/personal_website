/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        std::unordered_set<ListNode*> check;    
        while(head!=nullptr)
        {
            if(check.find(head) != check.end()) return head;
            check.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};
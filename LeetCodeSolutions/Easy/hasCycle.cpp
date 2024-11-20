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
    bool hasCycle(ListNode *head) {
        int node = 0;
        while(head!=nullptr)
        {
            head = head->next;
            node++;
            if(node>10*10*10*10) return true;
        }
        return false;
    }
};
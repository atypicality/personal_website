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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* test = head;
        while(head!=nullptr)
        {
            int first = head->val;
            ListNode* tmp = new ListNode(0);
            if(head->next != nullptr) tmp->val = head->next->val;
            int second = 0;
            if(tmp!=nullptr) second = tmp->val;
            if(second==0) break;
            int gcd=1;
            for(int i = 1; i <= second; i++)
            {
                if(first%i==0 && second%i==0) gcd = i;
            }
            tmp->val =gcd;
            tmp->next = head->next;
            head->next = tmp;
            head = tmp->next;
        }      
        return test;
    }
};
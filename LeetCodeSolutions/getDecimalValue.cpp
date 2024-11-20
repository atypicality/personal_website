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
    int getDecimalValue(ListNode* head) {
        string a = "";
        while(head!=nullptr)
        {
            a = a + to_string(head->val);
            head = head->next;
        }
        reverse(a.rbegin(),a.rend());
        int answer = 0;

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i]=='1')
            {
                answer = answer + pow(2,i);
            }
        }
        return answer;
        
    }
};
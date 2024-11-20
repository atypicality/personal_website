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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> answer;
        while(head!=nullptr)
        {
            ListNode* test = head;
            int a = test->val;
            bool check = true;
            while(test!=nullptr && test->next!=nullptr)
            {
                test = test->next;
                if(test->val > a)
                {
                    answer.push_back(test->val);
                    check = false;
                    break;
                } 
            }
            if(check == true) answer.push_back(0);
            head=head->next;
        }
        return answer;
    }
};
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* test = head;
        ListNode* test2 = head;
        vector<int> answer;
        int add = 0;
        while(test!=nullptr)
        {
            add += test->val;
            if(test->val==0 && add !=0)
            {
                answer.push_back(add);
                add=0;
                if(test->next==nullptr) break;
            }
            test = test->next;
        }
        int counter = 0;
        while(counter<answer.size())
        {
            test2->val = answer[counter];
            counter++;
            if(counter==answer.size())
            {
                test2->next = nullptr;
            }
            test2=test2->next;
        }

        return head;
    }
};
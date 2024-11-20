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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k == 0) return head;
        ListNode* test = head;
        ListNode* test2 = head;
        vector<int> answer;

        while(head!=nullptr)
        {
            answer.push_back(head->val);
            head=head->next;
        }

        int rotate = k%answer.size();
        cout<<rotate<<endl;

        for(int i = answer.size()-rotate; i < answer.size(); i++)
        {
            test->val=answer[i];
            test=test->next;
        } 
        for(int i = 0; i < answer.size()-rotate; i++)
        {
            test->val=answer[i];
            test=test->next;
        }   

        return test2;

    }
};
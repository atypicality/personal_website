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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* test = head;
        ListNode* test2 = head;
        map<int,int> answer;
        while(head!=nullptr)
        {
            answer[head->val]++;
            head = head->next;
        }
        vector<int> b;
         for (auto i = answer.begin(); i != answer.end(); i++)
         {
            if(( i->second )>=2) continue;
            else{
                b.push_back(i->first);
            }
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
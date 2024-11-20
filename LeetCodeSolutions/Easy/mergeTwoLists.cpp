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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* test = list1;
        ListNode* test2 = list2;
        ListNode* test4 = test2;
        ListNode* test3 = list1;
        vector<int> answer;
        int count = 0;
        while(list1!=nullptr)
        {
            answer.push_back(list1->val);
            list1 = list1->next;
            count++;
        }
         while(list2!=nullptr)
        {
            answer.push_back(list2->val);
            list2 = list2->next;
        }

        sort(answer.begin(), answer.end());
        int counter = 0;
        while(test2!=nullptr)
        {
            test2->val = answer[counter + count];
            counter++;
            test2=test2->next;  
        }
        counter = 0;
        while(test!=nullptr)
        {
            test->val = answer[counter];
            counter++;
            if(test->next==nullptr)
            {
                test->next = test4;
                break;
            }
            test=test->next;
        }
        
        return test3;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==nullptr) return head;
        ListNode* test = head;
        ListNode* test2 = test;
        vector<int> numbers;
    
        while(head!=nullptr)
        {
            auto it = std::find(numbers.begin(), numbers.end(), head->val);
            if (it == numbers.end()) {
                numbers.push_back(head->val);
            }
            head = head->next;
        }
        int counter = 0;
        while(counter!=numbers.size()-1)
        {
            test->val = numbers[counter];
            test = test->next;
            counter++;
        }
        test->val = numbers[numbers.size()-1];
        test->next = nullptr;
        return test2;

    }
};
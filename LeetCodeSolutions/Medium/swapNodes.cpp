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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* test = head;
        ListNode* test2 = head;
        ListNode* test3 = head;
        int counter = 1;
        int swap = 0; //value to swap
        int swap2 = 0;
        int index = 0; 
        while(head!=nullptr)
        {
            if(counter==k) 
            {
                swap = head->val;
            }
            counter++;
            head = head->next;
        }
        index = counter - k;
        counter=1;
        while(test!=nullptr)
        {
            if(index==counter)  
            {
                swap2 = test->val;
                test->val = swap;
                break;
            }
            counter++;
            test = test->next;
        }
        counter = 1;
        while(test2!=nullptr)
        {
            if(counter==k) 
            {
                test2->val = swap2;
                break;
            }
            counter++;
            test2 = test2->next;
        }
        return test3;
    }
};
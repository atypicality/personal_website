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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* test = head;       
        ListNode* test2 = head;
        int counter = 0;
        while(test!=nullptr)
        {
            test = test->next;
            counter++;
        }
        int checks = counter;
        if(counter==1) return nullptr;
        counter=counter/2;
        if(counter == 1 && checks == 2)
        {
            test2->next=nullptr;
            return head;
        }
        while(counter!=-1)
        {
            counter--;
            if(counter-1 != -1) test2 = test2->next;
            else{
                    if(test2->next->next!=nullptr) 
                    {
                        test2->next = test2->next->next;
                        test2=test2->next;
                    }
                    break;
            }
        }
        return head;
    }
};
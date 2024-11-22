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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* test = head;
        ListNode* test2 = head;

        int total = 0;
        int place = 0;
        while(test!=nullptr)
        {
            total++;
            test = test->next;
        }
        place = total-n;
        if(place == 0)
        {
            head=head->next;
            return head;
        }
        if(place==total-1)
        {
            while(test2!=nullptr)
            {
                if(test2->next->next!=nullptr) test2 = test2->next;
                else{
                    test2->next = nullptr;
                    test2 = test2->next;
                }
            }    
            return head;
        }
        int counter = 0;
        while(test2!=nullptr)
        {
            if(counter+1==place) 
            {
                if (test2->next != nullptr) {
                test2->next = test2->next->next;
                }              
                test2 = test2->next;
            }
            else{
                test2 = test2->next;
            }
            counter++;
        }   
        return head;
        
    }
};
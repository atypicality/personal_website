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
    ListNode* h;
    int max;
    Solution(ListNode* head) {
        h = head;   
        ListNode* test = h;
        int count = 0;
        while(test!=nullptr)
        {
            count++;
            test = test->next;    
        } 
        max = count;
    }
    
    int getRandom() {
       int randomValueInRange = (rand() % max);
       cout << randomValueInRange;
       ListNode* test2 = h;
       int counter = 0;
       while(counter!=randomValueInRange)
       {
            test2=test2->next;
            counter++;
       }
       return test2->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
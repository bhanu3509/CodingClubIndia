/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        {
            return 0;
        }
        else if(head - head->next >= 0)
        {
            return 1;
        }
        // else
        // {
        //     return false;
        // }
        
        return hasCycle(head->next);
    }
};
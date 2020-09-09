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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
        {
            return head;
        }
        
        ListNode *curr = new ListNode(-1);
        curr->next = head;
        head = curr;
        while(curr->next != NULL)
        {
            if(curr->next->val == val)
            {
                curr->next = curr->next->next;
                // head = head->next;
            }
            else
            {
                curr = curr->next;
            }
        }
        
        return head->next;
    }
};
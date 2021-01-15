/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param l1: ListNode l1 is the head of the linked list
     * @param l2: ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode *head;
        ListNode *p;
        ListNode *temp;
        
        if(l1->val < l2->val)
        { 
            temp = l2;
            head = l1;
            p = l1;
        }
        else 
        {
            temp = l1;
            head = l2;
            p = l2;
        }
        
        while(p->next)
        {
            if(p->next->val < temp->val)
                p = p->next;
            else
            {
                ListNode *node;
                node = p->next;
                p->next = temp;
                temp = node;
                p = p->next;
            }
        }
        
        p->next = temp;
            
        return head;
    }
};
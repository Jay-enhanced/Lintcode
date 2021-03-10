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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        int sum = 0;
        int carry = 0;     

        ListNode *newhead = new ListNode(0);
        ListNode *p = newhead;

        while(1)
        { 
            if(l1 != nullptr)
            {
                carry += l1->val;
                l1 = l1->next;
            }           
            if(l2 != nullptr)
            {
                carry += l2->val;
                l2 = l2->next;
            } 

            p->val = carry % 10;
            carry /= 10;

            if(l1 != nullptr || l2 != nullptr || carry)
            {
                p->next = new ListNode(0);
                p = p->next;
            }
            else break;
        }

        return newhead;
    }
};
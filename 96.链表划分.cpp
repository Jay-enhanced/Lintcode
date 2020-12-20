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
     * @param head: The first node of linked list
     * @param x: An integer
     * @return: A ListNode
     */
    ListNode * partition(ListNode * head, int x) {
        // write your code here
        ListNode *leftDummy = new ListNode(0);
        ListNode *rightDummy = new ListNode(0);
        ListNode *leftTail = leftDummy;
        ListNode *rightTail = rightDummy;
        
        while (head != NULL) {
            if (head->val < x) {
                leftTail->next = head;
                leftTail = head;
            } else {
                rightTail->next = head;
                rightTail = head;
            }
            head = head->next;
        }
        
        leftTail->next = rightDummy->next;
        rightTail->next = NULL;
        
        return leftDummy->next;
    }
};

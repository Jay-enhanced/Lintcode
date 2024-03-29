/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param node: the node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode * node) {
        // write your code here
        ListNode *pnode;

        if(node == nullptr)
            return;

        pnode = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete(pnode);
    }
};
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
//给定一个排序链表，删除所有重复的元素每个元素只留下一个。
class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        // write your code here
        if(!head) return NULL;
        
        ListNode *link = head;
        ListNode *node;
        
        while(link->next)
        {
            if(link->val == link->next->val)
            {
                node = link->next;
                link->next = link->next->next;
                free(node);
            }
            else
                link = link->next;
        }
        return head;
    }
};
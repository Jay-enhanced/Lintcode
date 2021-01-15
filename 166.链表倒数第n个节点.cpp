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

//方法一：计算链表长度，再算出第几个是所求的结点，遍历到那个节点，返回（效率低）
class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        // write your code here
        int nodeCounts = 0;
        
        ListNode *link = head;
        while(link)
        {
            nodeCounts++;
            link = link->next;
        }
        
        if(nodeCounts < n || n <= 0) return NULL;
        
        link = head;
        for(int i = 0; i < nodeCounts-n+1; i++)
        {
            if(i == nodeCounts-n) 
                return link;
            
            link = link->next;
        }
        
        return NULL;
    }
};

#if 0
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

//方法2：用双指针，一个先走n，然后两个再同时起步，先走的指针走到尾，后走的指针所指的结点就是所求
class Solution {
public:
    /*
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode * nthToLast(ListNode * head, int n) {
        // write your code here
        if(!head || n < 1)
            return NULL;
            
        ListNode *p1 = head;
        ListNode *p2 = head;
        
        for(int i = 0; i < n-1; i++)
        {
            if(p2 == NULL)
                return NULL;
            
            p2 = p2->next;
        }
        
        while(p2->next)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        return p1;
    }
};
#endif
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
/**
 * 给出两个链表形式表示的数字,写一个函数得到这两个链表相乘乘积。
 * 输入：9->4->6->null,8->4->null
 * 输出：79464
 * 解释：946*84=79464
 * /
class Solution {
public:
    /**
     * @param l1: the first list
     * @param l2: the second list
     * @return: the product list of l1 and l2
     */
    long long multiplyLists(ListNode * l1, ListNode * l2) {
        // write your code here
        ListNode *link1 = l1;
        ListNode *link2 = l2;
        
        long long sum1 = 0, sum2 = 0;
        
        if(!link1 || !link2) return 0;
        
        while(link1)
        {
            sum1 = sum1 * 10 + link1->val;
            link1 = link1->next;
        }
        while(link2)
        {
            sum2 = sum2 * 10 + link2->val;
            link2 = link2->next;
        }
        
        return sum1*sum2;
    }
};
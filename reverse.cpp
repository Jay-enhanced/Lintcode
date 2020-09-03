ListNode * reverse(ListNode * head) {
    // write your code here
    ListNode *pre = NULL;
    
    while(head != NULL)
    {
        ListNode *temp = head->next;
        head->next = pre;
        pre = head;
        head = temp;
    }
    
    return pre;
}
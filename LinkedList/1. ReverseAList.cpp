// Fastest approach
// Three pointer approach
ListNode* reverseList(ListNode* head) {
    ListNode*p=head;
    ListNode*q=NULL;
    ListNode*r=NULL;
    while(p){
        q=p;
        p=p->next;
        q->next=r;
        r=q;
    }
    return r;
}
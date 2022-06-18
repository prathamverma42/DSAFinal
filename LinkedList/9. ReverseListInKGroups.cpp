// Simple Recursive approach treat all parts as individual
ListNode* reverseKGroup(ListNode* head, int k) {
    int cnt = 0;
    ListNode*temp = head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    if(cnt<k){
        return head;
    }
    ListNode*curr=head;
    ListNode*nex=NULL;
    ListNode*prev=NULL;
    cnt=0;
    while(curr && cnt!=k){
        cnt++;
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    if(nex){
        head->next=reverseKGroup(nex,k);
    }
    return prev;
}
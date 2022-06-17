// Simple basic approach calculate the length of the list and traverse from front and delete that node;
ListNode* removeNthFromEnd(ListNode* head, int n) {
    int len = 0;
    ListNode*temp=head;
    while(temp){
        len++;
        temp=temp->next;
    }
    if(len==1){
        return NULL;
    }
    int indx = len-n;
    temp=head;
    int k=1;
    if(indx==0){
        head=head->next;
        return head;
    }
    while(k!=indx){
        k++;
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}

//Fast and Slow pointer method
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode*fast=head;
    ListNode*slow=NULL;
    int cnt=1;
    while(cnt!=n){
        cnt++;
        fast=fast->next;
    }
    while(fast->next!=NULL){
        if(slow==NULL){
            slow=head;
            fast=fast->next;
            continue;
        }
        fast=fast->next;
        slow=slow->next;
    }
    if(slow==NULL){
        head=head->next;
        return head;
    }else{
        slow->next=slow->next->next;
        return head;
    }
}
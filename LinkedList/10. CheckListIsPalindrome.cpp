// reverse the other half part of the list and then just move the both pointer and check 
ListNode* reverse(ListNode* head){
    ListNode* p = head;
    ListNode* q = p->next;
    ListNode* r = NULL;
    while(p!=r){
        p->next=r;
        r=p;
        p=q;
        if(p->next){
            q=p->next;                
        }
    }
    head = r;
    return head;
}

bool isPalindrome(ListNode* head) {
    if(head->next==NULL){
        return true;
    }
    if(head->next->next==NULL){
        return head->val==head->next->val;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode*head2=reverse(slow);
    while(head2!=NULL){
        if(!(head2->val==head->val)){
            return false;
        }
        head2=head2->next;
        head=head->next;
    }
    return  true;
}
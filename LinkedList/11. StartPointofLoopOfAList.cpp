//Simple Using with the help of HASHMAP
ListNode *detectCycle(ListNode *head) {
    map<ListNode*,int> mp;
    int i=1;
    while(head){
        if(mp.find(head)==mp.end()){
            mp.insert({head,i});
        }else{
            return head;
        }
        head=head->next;
        i++;
    }
    return NULL;
}

//Using Fast and Slow pointer simple trick is there That we have to start another pointer from head when slow meets fast
ListNode *detectCycle(ListNode *head) {
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            ListNode*start=head;
            while(start!=slow){
                slow=slow->next;
                start=start->next;
            }
            return slow;
        }
    }
    return NULL;
}
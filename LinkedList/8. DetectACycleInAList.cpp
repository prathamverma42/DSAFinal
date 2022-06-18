// Basic approach is to use the HASHMAP and find the cycle
bool hasCycle(ListNode *head) {
    map<ListNode*,int> mp;
    while(head){
        if(mp.find(head)==mp.end()){
            mp.insert({head,1});
        }else{
            return true;
        }
        head=head->next;
    }
    return false;
}

//FAST AND SLOW POINTER
bool hasCycle(ListNode *head) {
    if(head==NULL || head->next==NULL){
        return false;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
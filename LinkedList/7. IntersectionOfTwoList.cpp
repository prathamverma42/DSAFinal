//Basic approach use a HASHmap to store the address of one list and find all the other lists address in the HASHmap
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    map<ListNode*,int> mp;
    ListNode* temp = headA;
    while(temp){
        mp.insert({temp,1});
        temp=temp->next;
    }
    temp=headB;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

// Optimized approach by finding the length of both the lists
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int l1 = 0;
    int l2 = 0;
    ListNode* temp = headA;
    while(temp){
        temp=temp->next;
        l1+=1;
    }
    temp=headB;
    while(temp){
        temp=temp->next;
        l2+=1;
    }
    int diff = abs(l1-l2);
    ListNode* p1 = headA;
    ListNode* p2 = headB;
    if(l1>l2){
        while(diff){
            p1=p1->next;
            diff--;
        }
    }else{
        while(diff){
            p2=p2->next;
            diff--;
        }
    }
    while(p1!=p2){
        p1=p1->next;
        p2=p2->next;
    }
    return p1;
}
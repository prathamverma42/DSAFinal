// Simple Two pointers Compare and merge
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return  list1;
    }
    ListNode* head;
    if(list1->val<=list2->val){
        head=list1;
        list1=list1->next;
    }else{
        head=list2;
        list2=list2->next;
    }
    ListNode* Final=head;
    while(list1 && list2){
        if(list1->val<=list2->val){
            head->next=list1;
            list1=list1->next;
        }else{
            head->next=list2;
            list2=list2->next;
        }
        head=head->next;
    }
    while(list1){
        head->next=list1;
        list1=list1->next;
        head=head->next;
    }
    while(list2){
        head->next=list2;
        list2=list2->next;
        head=head->next;
    }
    return Final;
}
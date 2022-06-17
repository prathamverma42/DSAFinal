// Simple but slow method
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = NULL;
    ListNode* Final = NULL;
    int carry = 0;
    while(l1 || l2 || carry){
        int sum = 0;
        if(l1!=NULL){
            sum += l1->val;    
        }
        if(l2!=NULL){
            sum += l2->val;
        }
        sum += carry;
        ListNode* temp =  new ListNode(sum%10);
        carry = sum/10;
        if(head==NULL){
            head = temp;            
            Final = temp;
        }else{
            head->next = temp;
            head=head->next;        
        }
        if(l1!=NULL){
            l1=l1->next;
        }
        if(l2!=NULL){
            l2=l2->next;
        }
    }
    return Final;
}

//Fast method
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum=0;
    ListNode *l3=NULL;
    ListNode **node=&l3;
    while(l1!=NULL||l2!=NULL||sum>0){
        if(l1!=NULL){
            sum+=l1->val; 
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        // cout<<sum<<" ";
        (*node)=new ListNode(sum%10);
        sum/=10;
        node=&((*node)->next);
    }        
    return l3;
}
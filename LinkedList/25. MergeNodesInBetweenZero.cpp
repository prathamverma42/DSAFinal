//Ques link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

ListNode* mergeNodes(ListNode* head) {
    int sum = 0;
    ListNode* start=head;
    ListNode* last=head->next;
    while(last!=NULL){
        sum+=last->val;
        if(last->next->val==0){
            ListNode*temp = new ListNode(sum);
            sum=0;
            if(head->val==0){
                start=temp;
                head=temp;
            }else{
                start->next=temp;
                start=temp;                    
            }
            last = last->next->next;
        }else{
            last=last->next;            
        }
    }
    return head;
}

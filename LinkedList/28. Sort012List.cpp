// Ques Link: https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1#

Node* segregate(Node *head) {
    // Add code here
    Node* zero = new Node(-1);
    Node* one = new Node(-1);
    Node* two = new Node(-1);
    Node* zero_head = zero;
    Node* one_head = one;
    Node* two_head = two;
    while(head){
        if(head->data==0){
            zero->next=head;
            zero=zero->next;
        }
        else if(head->data==1){
            one->next=head;
            one=one->next;
        }else{
            two->next=head;
            two=two->next;
        }
        head=head->next;
    }
    zero->next=(one_head->next)?(one_head->next):(two_head->next);
    one->next=two_head->next;
    zero_head=zero_head->next;
    head=zero_head;
    two->next=NULL;
    return head;
}
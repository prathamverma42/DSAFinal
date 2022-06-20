// Ques Link: https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

Node* reverseDLL(Node * head)
{
    //Your code here
    Node* p=head;
    Node* q=NULL;
    while(p!=NULL){
        p->prev=p->next;
        p->next=q;
        q=p;
        p=p->prev;
    }
    head=q;
}

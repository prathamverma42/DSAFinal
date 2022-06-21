//Ques link: https://practice.geeksforgeeks.org/problems/rotate-doubly-linked-list-by-p-nodes/1/

Node *rotateDLL(Node *head,int p)
{
    //Add your code here
    Node* temp = head;
    Node* last = head;
    int k=0;
    while(last->next!=NULL){
        last=last->next;
        if(k!=p){
            temp=temp->next;
            k++;
        }
    }
    last->next=head;
    head->prev=last;
    head=temp;
    temp->prev->next=NULL;
    temp->prev=NULL;
    return head;
}
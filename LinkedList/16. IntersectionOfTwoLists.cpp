//Ques LinK: https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1#

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    set<int> s;
    Node*temp= head1;
    while(temp){
        s.insert(temp->data);
        temp=temp->next;
    }
    temp=head2;
    Node*head=NULL;
    Node*temp2=NULL;
    while(temp){
        if(s.find(temp->data)==s.end()){
            temp=temp->next;
        }else{
            s.erase(temp->data);
            Node* samp = new Node(temp->data);
            if(head==NULL){
                head=samp;
                temp2=head;
            }else{
                temp2->next=samp;
                temp2=samp;
            }
            temp=temp->next;
        }
    }
    return head;
}
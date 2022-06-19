//Ques Link : https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#

Node* reverse(Node* head){
    Node* curr= head;
    Node* nex= NULL;
    Node* prev= NULL;
    while(curr){
        nex = curr->next;
        curr->next = prev;
        prev= curr;
        curr= nex;
    }
    return prev;
}

 Node* addOne(Node *head) 
{
    // Your Code here
    head = reverse(head);
    Node* temp = head;
    int carry=1;
    int sum =0;
    Node*last;
    while(temp){
        sum = temp->data+ carry;
        temp->data=sum%10;
        carry = sum/10;
        if(temp->next==NULL && carry>0){
            last=temp;
        }
        temp=temp->next;
    }
    if(carry>0){
        Node* samp = new Node(carry);
        last->next=samp;
    }
    head = reverse(head);
    return head;
}
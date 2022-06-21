// Ques link: https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1#

Node* merge(Node* a, Node* b){
    Node* dummy = new Node(-1);
    Node* head = dummy;
    while(a && b){
        if(a->data<b->data){
            dummy->next=a;
            dummy=a;
            a=a->next;
        }else{
            dummy->next=b;
            dummy=b;
            b=b->next;
        }
    }
    while(a){
        dummy->next=a;
        dummy=a;
        a=a->next;
    }
    while(b){
        dummy->next=b;
        dummy=b;
        b=b->next;
    }
    head = head->next;
    return head;
}
Node * mergeKLists(Node *arr[], int k)
{
        // Your code here
        if(k==0){
            return NULL;
        }
        if(k==1){
            return arr[0];
        }
        Node* temp = merge(arr[0],arr[1]);
        Node* head;
        for(int i=2;i<k;i++){
            head = merge(temp,arr[i]);
            temp=head;
        }
        return temp;
}
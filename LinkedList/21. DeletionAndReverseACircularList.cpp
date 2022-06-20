// Ques link: https://practice.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    struct Node* temp= *head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head)
{

// Your code goes here
struct Node* curr= *head;
struct Node* prev= NULL;
struct Node* nex= NULL;
while(curr->next!=*head){
    nex=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;
}
nex = curr->next;
curr->next=prev;
prev=curr;
*head=prev;
nex->next=prev;
}
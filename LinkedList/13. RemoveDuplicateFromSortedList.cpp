// Ques Link: https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1

Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* temp =head;
 while(temp && temp->next){
     if(temp->data == temp->next->data){
         temp->next=temp->next->next;
     }else{
         temp=temp->next;
     }
 }
 return head;
}
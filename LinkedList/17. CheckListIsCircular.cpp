//Ques Link: https://practice.geeksforgeeks.org/problems/circular-linked-list/1#

bool isCircular(Node *head)
{
   // Your code here
   Node* temp = head;
   while(temp->next!=NULL && temp->next!=head){
       temp=temp->next;
   }
   if(temp->next==head) return true;
   else return false;
}
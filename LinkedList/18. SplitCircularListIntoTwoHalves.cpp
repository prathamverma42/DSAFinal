//Ques Link: https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1#

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *slow_ptr = head;
    Node *fast_ptr = head;
     
    if(head == NULL)
        return;

    while(fast_ptr->next != head && fast_ptr->next->next != head)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
    if(fast_ptr->next->next == head)//even no of elements
        fast_ptr = fast_ptr->next;
         
    *head1_ref = head;
    *head2_ref = slow_ptr->next;
    
    fast_ptr->next = slow_ptr->next;
    slow_ptr->next = head;

}
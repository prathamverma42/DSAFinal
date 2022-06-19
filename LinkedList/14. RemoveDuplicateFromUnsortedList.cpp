// Ques Link: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#

// I have done this using dummy Node
Node * removeDuplicates( Node *head) 
{
    // your code goes here
    map<int,int> mp;
    Node*dummy = new Node(0);
    dummy->next=head;
    Node*temp = dummy;
    while(temp && temp->next){
        if(mp.find(temp->next->data)==mp.end()){
            mp.insert({temp->next->data,1});
            temp=temp->next;
        }else{
            temp->next=temp->next->next;
        }
    }
    return head;
}
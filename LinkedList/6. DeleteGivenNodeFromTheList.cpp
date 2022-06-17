// Given the node to be delted and also the next node to it exits
void deleteNode(ListNode* node) {
    node->val=node->next->val;
    node->next=node->next->next;
}
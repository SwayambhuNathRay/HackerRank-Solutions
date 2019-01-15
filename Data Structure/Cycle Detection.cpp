/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == NULL)
        return false;
    Node* fast = head->next;
    Node* slow = head;
    while(fast->next!=NULL)
        {
        if(fast == slow)
            {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}

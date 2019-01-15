/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(head == NULL)
        return NULL;
    Node* nextnode = head->next;
    Node* curr = head;
    while(nextnode!=NULL)
        {
    Node* keep = curr->next;
    curr->next = curr->prev;
    curr->prev = keep;
        curr = nextnode;
        nextnode = nextnode->next;
    }
    Node* keep = curr->next;
    curr->next = curr->prev;
    curr->prev = keep;
    return curr;
}


  /*Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
    {
    if(head==NULL)
        return NULL;
    Node *prev, *curr, *nex;
    prev = NULL;
    curr = head;
    nex = head->next;
    while(nex!=NULL)
        {
        curr->next = prev;
        prev = curr;
        curr = nex;
        nex = nex->next;
    }
    curr->next=prev;
    return curr;
}
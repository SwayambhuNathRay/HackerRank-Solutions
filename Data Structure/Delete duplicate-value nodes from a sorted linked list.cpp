/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head==NULL)
        return NULL;
    Node* current = head->next;
    Node* prev = head;
    while(current!=NULL)
        {
        if(current->data == prev->data)
            {
            Node* temp = current;
            current = current->next;
            prev->next = current;
            delete temp;
        }
        else
            {
            current = current->next;
            prev = prev->next;
        }
    }
    return head;
    
}

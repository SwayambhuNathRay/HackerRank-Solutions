/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node *p=new Node;
    if(head==NULL)
        {
        p->data=data;
        p->next=NULL;
        return p;
    }
    
    p->next=head;
    p->data=data;
    return p;
  // Complete this method
}

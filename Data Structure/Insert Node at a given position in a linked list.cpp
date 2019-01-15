/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    
    Node *p=new Node;
    Node *q=new Node;
    if(position==0)
        {
        if(head==NULL)
            {
            p->data=data;
            p->next=NULL;
            return p;
        }
        else
            {
            p->data=data;
            p->next=head;
            return p;
        }
    }
    p=head;
    for(int i=0; i<position-1; i++)
        {
      p=p->next;
    }
    q->data=data;
    q->next=p->next;
    p->next=q;
    return head;
}

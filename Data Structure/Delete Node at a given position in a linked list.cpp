/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *p=new Node;
    Node *q=new Node;
    p=head;
    if(position==0)
        {
        p=p->next;
        head =p;
        return head;
    }
    for(int i=0; i<position-1;i++)
        {
        p=p->next;
    }
    q=p;
    q=q->next;
    q=q->next;
    p->next=q;
    return head;
}

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
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
    Node *temp=head;
    while(temp->next !=NULL)
        temp=temp->next;
    temp->next=p;
    p->next=NULL;
    p->data=data;
    return head;
        
    
}

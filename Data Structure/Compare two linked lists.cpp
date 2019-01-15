/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL && headB == NULL)
        return 1;
    if(headA==NULL && headB!=NULL)
        return 0;
     if(headA!=NULL && headB==NULL)
        return 0;
    Node *first, *second;
    first = headA;
    second = headB;
    while(first!=NULL)
        {
        if(first->data == second->data)
            {
            first=first->next;
            second=second->next;
        }
        else
            {
            return 0;
        }
    }
    if(second!=NULL)
        return 0;
    if(first==NULL && second==NULL)
        return 1;
    return 1;
}

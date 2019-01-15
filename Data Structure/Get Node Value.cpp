/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    string s;
    if(head==NULL)
        return 0;
    Node* next = head;
    while(next!=NULL)
        {
        s = (char)next->data + s;
        next = next->next;
    }
    return s[positionFromTail];
}

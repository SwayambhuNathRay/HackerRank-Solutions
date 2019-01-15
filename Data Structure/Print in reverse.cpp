/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  if(head==NULL)
      return;
   Node *p=head;
    string s;
    while(p!=NULL){
        s=to_string(p->data) +'\n' + s;
        p=p->next;
    }
    cout << s;
}
    
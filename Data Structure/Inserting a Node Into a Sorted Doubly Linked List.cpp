/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    if(head==NULL)
        {
        Node* newnode = new Node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }
    if(data < head->data)
        {
        Node* newnode = new Node;
        newnode->data = data;
        newnode->next = head;
        newnode->prev = NULL;
        return newnode;
    }
    Node* newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    Node* curr = head;
    while(curr->data < data && curr->next!=NULL)
        {
        curr = curr->next;
    }
    if(curr->data > data){
    newnode->next = curr;
    newnode->prev = curr->prev;
    curr->prev->next = newnode;
    curr->prev = newnode;
    return head;
    }
    else
        {
        curr->next = newnode;
        newnode->prev = curr;
        return head;
    }
}

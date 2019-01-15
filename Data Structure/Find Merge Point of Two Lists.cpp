/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node* first = headA;
    Node* second = headB;
    string s1, s2;
    while(first!=NULL)
        {
        s1 = (char)first->data + s1;
        first = first->next;
    }
     while(second!=NULL)
        {
        s2 = (char)second->data + s2;
        second = second->next;
    }
    int i;
    i = (s1.size()>=s2.size())?s2.size():s1.size();
    int j = 0;
    while(j<i-1)
        {
        if(s1[j+1]!=s2[j+1])
            return (int)s1[j];
        j++;
    }
    return 0;
}

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA==NULL || headB==NULL)
        {
        if(headA==NULL)
            return headB;
        else
            {
            return headA;
        }
    }
    Node *k1, *k2, *low, *high, *keep;
    
    if(headA->data > headB->data)
        {
        low=headB;
        keep=low;
        high=headA;
        k1=low;
        k2=high;
    }
    

    if(headA->data < headB->data)
        {
        low=headA;
        keep=low;
        high=headB;
        k1=low;
        k2=high;
    }
    
    while(low!=NULL)
        {
        if(low->data > high->data)
            {
            k1->next=k2;
            high=high->next;
            k2->next = low;
            k1=low;
            low=low->next;
            k2=high;
            if(k2==NULL)
                break;
            if(low==NULL)
                {
                k1->next=k2;
                break;
            }
        }
        else
            {
            k1=low;
            low=low->next;
            if(low==NULL)
                {
                k1->next=k2;
                break;
            }
            if(k2==NULL)
                break;
        }
    }
    return keep;
}

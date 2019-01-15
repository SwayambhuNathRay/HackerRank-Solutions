/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
if(root == NULL)
    {
    root = new node;
    root->data = value;
    root->right = NULL;
    root->left = NULL;
    return root;
}
    node* p = root;

   if(value> p->data)
       {
       if(p->right!=NULL)
         insert(p->right, value);
       else
           {
           p->right = new node;
           p->right->data = value;
           p->right->right = NULL;
           p->right->left = NULL;
           return root;
       }
   }
    if(value< p->data)
        {
        if(p->left!=NULL)
        insert(p->left,value);
        else
            {
            p->left = new node;
           p->left->data = value;
           p->left->right = NULL;
           p->left->left = NULL;
            return root;
        }
    }

      return root;  

}

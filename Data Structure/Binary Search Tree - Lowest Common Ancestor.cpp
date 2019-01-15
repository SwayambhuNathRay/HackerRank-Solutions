/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    if(root==NULL)
        return NULL;
    node* search1 = root;
    node* search2 = root;
    node* search1follow = NULL;
    node* search2follow = NULL;
    while(search1->data!=v1 && search2->data!=v2)
        {
        if(v1>search1->data)
            {
            search1follow = search1;
            search1 = search1->right;
        }
        else
            {
            search1follow = search1;
            search1 = search1->left;
        }
        if(v2>search2->data)
            {
            search2follow = search2;
            search2 = search2->right;
        }
        else
            {
            search2follow = search2;
            search2 = search2->left;
        }
        
        if(search2!=search1)
            return search1follow;
        }
   
    if(search1->data == v1)
        return search1;
    else
        return search2;
}



/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    node* p[1000];
    int i=0, j=0;
    while(root!=NULL)
        {
        cout << root->data << " ";
        if(root->left)
            {
            p[i]=(root->left);
            i++;
        }
        if(root->right)
            {
            p[i]=(root->right);
            i++;
        }
        root = p[j];
        j++;
    }
  
}

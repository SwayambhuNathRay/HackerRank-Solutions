/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    if(root!=NULL)
        {
        postOrder(root->left);
      
        postOrder(root->right);
          cout << root->data << " ";
    }
    else
        return;

}

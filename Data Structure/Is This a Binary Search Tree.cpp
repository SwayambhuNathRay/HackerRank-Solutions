/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/


vector<int> keep;

void inorder(Node* root)
    {
    if(root == NULL)
        return;
    inorder(root->left);
    keep.push_back(root->data);
    inorder(root->right);
}


   bool checkBST(Node* root) {
       inorder(root);
       int len = keep.size();
       for(int i = 0; i < len-1; i++)
           {
           if(keep[i] >= keep[i+1])
               return false;
       }
      return true;
   }

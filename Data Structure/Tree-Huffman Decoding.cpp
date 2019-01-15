/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    if(root == NULL)
        return;
    int i = 0;
    node* keep = root;
    int j = s.length();
    while(i<j)
        {
        if(keep->left == NULL && keep->right == NULL)
            {
            cout << keep->data;
            keep = root;
        }
        if(s[i] == '0')
            {
            keep = keep->left;
            i = i+1;
            continue;
        }
        if(s[i] == '1')
            {
            keep = keep->right;
            i = i+1;
            continue;
        }
    }
    if(keep->left == NULL && keep->right == NULL)
            {
            cout << keep->data;
            keep = root;
        }
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
  int data;
  node *left;
  node *right;        
};

int calHeight(node* root){
    if(root == NULL)
        return 0;
    else
        return 1 + max(calHeight(root->left), calHeight(root->right));
}

void inOrder(node *root){
    if(root == NULL)
        return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

node *createNode(int value){
    if(value == -1)
        return NULL;
    
    node *newNode = new node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void attachNodes(node *root, int level){
    if(root == NULL)
        return;
    
    if(level == 1){
        int a,b;
        cin>>a>>b;
        root->left = createNode(a);
        root->right = createNode(b);
    }else{
        attachNodes(root->left, level-1);
        attachNodes(root->right, level-1);
    }    
}

void swapChildren(node *root, int l){
    if(root == NULL)
        return;
    
    if(l == 1){
        node *temp = root->left;
        root->left = root->right;
        root->right = temp;        
    }else{
        swapChildren(root->left, l-1);
        swapChildren(root->right, l-1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, t, l, h;
    cin>>n;
    
    node *root = createNode(1); 
    node *head = root;
    
    for(int i = 1; i<=n; i++)
        attachNodes(root, i);
    
    cin>>t;
    h = calHeight(root);
    
    while(t--){
        cin>>l;
        for(int i = 1; i<=h; i++){
            if(l*i <= h){
                swapChildren(root, l*i);
            }else{
                break;
            }
        }
        inOrder(head);
        cout<<endl;
    }        
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class node{
public:
   int data;
   node* left;
   node* right;

   node(int d)
   {
       data=d;
   }
};
node * buildTree()
{
    int n;
    cin>>n;
    if(n==-1)
    {
        return NULL;
    }
    node *root =new node(n);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
int treeSum(node* root)
{
    if(root==NULL)
    {
           return 0;
    }
    int s=root->data;
    cout<<s<<endl;
    if(root->left==NULL&&root->right==NULL)
    {

    return s;
    }
    else{
        root->data=treeSum(root->left)+treeSum(root->right);
       return root->data+s;
    }
}

void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{
    node *root=buildTree();
   treeSum(root);
   print(root);

}

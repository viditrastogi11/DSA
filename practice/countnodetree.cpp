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
int countNode(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return countNode(root->left)+countNode(root->right)+1;
}
int sumNode(node *root,int l,int r)
{
    if(root==NULL)
    {
        return 0;
    }
    int n=0;
    if(root->data>=l&&root->data<=r)
    {
        n=root->data;
    }
    return sumNode(root->left,l,r)+sumNode(root->right,l,r)+(n);
}
int main()
{
    node *root=buildTree();
    cout<<countNode(root);
    cout<<endl;
    cout<<sumNode(root,5,10);

}
//5 6 2 -1 -1 3 4 -1 -1 -1 8 -1 23 9 -1 20 -1 -1 10 -1 -1

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
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameter(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    int opt1=h1+h2;
    int opt2=diameter(root->left);
    int opt3=diameter(root->right);
    return max(opt1,max(opt2,opt3));
}
pair<int,int> diameterOpt(node *root)
{
    pair<int,int> p;
    if(root==NULL)
    {
         p.first=p.second=0;
         return p;
    }

    pair<int,int> left=diameterOpt(root->left);
    pair<int,int> right =diameterOpt(root->right);

    p.first=max(left.first,right.first)+1;
    p.second=max(left.first+right.first,max(left.second,right.second));

    return p;


}
int main()
{
    node *root=buildTree();
    cout<<diameterOpt(root).second;

}

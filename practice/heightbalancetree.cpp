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
pair<int,bool> check_balanced(node*root)
{
    pair<int,bool>p(0,true);
if(root==NULL)
{
    return p;
}
pair<int,bool> a=check_balanced(root->left);
pair<int,bool> b=check_balanced(root->right);
if(a.second&&b.second)
{
    if(a.first-b.first>1||b.first-a.first>1)
    {
        p.second=false;
        return p;
    }
    else{
        p.second=true;
    }

}
else{
        p.second=false;
    return p;
}
p.first=max(a.first,b.first)+1;
return p;
}

node* buildBalanceTree(int arr[],int s, int l)
{
    if(s>l)
    {
        return NULL;
    }
    int m=(s+l)/2;
    node* root=new node(arr[m]);
    root->left=buildBalanceTree(arr,s,m-1);
    root->right=buildBalanceTree(arr,m+1,l);
    return root;
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
    int arr[7]={1,2,3,4,5,6,7};
   node *root=buildBalanceTree(arr,0,6);
   print(root);

}


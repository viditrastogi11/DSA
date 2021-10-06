#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct node{

int data;
struct node* left;
struct node *right;

} node;
node* insertlinked(node *root,int val)
{
    if(root==NULL)
    {
        root=new node();
        root->data=val;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
   if(root->data>val)
   {
       if(root->left!=NULL)
       {
    insertlinked(root->left,val);

       }
       else{
        root->left=insertlinked(root->left,val);
       }
   }
   else{
    if(root->right!=NULL)
       {
        insertlinked(root->right,val);

       }
       else{
        root->right=insertlinked(root->right,val);
       }

   }
    return root;
}
void printlinked(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    if(root->left!=NULL)
    {
        printlinked(root->left);
    }
    if(root->right!=NULL)
    {
        printlinked(root->right);
    }

}
void bfstraversal(node *root)
{
if(root==NULL)
{
    return;
}
queue<node*> q;
q.push(root);
while(q.empty()==false)
{
    node * temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left!=NULL)
        q.push(temp->left);
    if(temp->right!=NULL)
        q.push(temp->right);
}
cout<<endl;

}
void leftview(node *root)
{

    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    while(q.empty()==false)
    {

        int n=q.size();
        for(int i=1; i<=n; i++)
        {
            node * temp=q.front();
            if(i==1)
            {
             cout<<temp->data<<" ";
            }
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
    cout<<endl;

}

int main()
{
    node *root=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
    root=insertlinked(root,val);
    }
    printlinked(root);
    cout<<endl;
    bfstraversal(root);
    leftview(root);
}

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
void printKthlevel(node* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ,";
        return;
    }
    printKthlevel(root->left,k-1);
    printKthlevel(root->right,k-1);

}
node* findTarget(node*root,int t)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==t)
    {
        return root;
    }
  node* l=  findTarget(root->left,t);
   node* r= findTarget(root->right,t);
   if(l!=NULL)
   {
       return l;
   }
   if(r!=NULL)
   {
       return r;
   }

}
int printKthTarget(node* root, node* target, int k)
{

    if(root==NULL)
    {
        return -1;
    }
    if(root==target)
    {
        printKthlevel(target,k);
        return 0;
    }
    int DL=printKthTarget(root->left,target,k);
    if(DL!=-1)
    {
        if(DL+1==k)
        {
            cout<<root->data;
        }
        else{
             printKthlevel(root->right,k-2-DL);
        }
        return 1+DL;
    }
     int DR=printKthTarget(root->right,target,k);
    if(DR!=-1)
    {
        if(DR+1==k)
        {
            cout<<root->data;
        }
        else{
             printKthlevel(root->left,k-2-DR);
        }
        return 1+DR;
    }
    return -1;
}
void printLevelBFS(node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            q.pop();
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
            continue;
        }

        if(q.front()->left!=NULL)
        {
            q.push(q.front()->left);
        }
        if(q.front()->right!=NULL)
        {
            q.push(q.front()->right);
        }
        cout<<q.front()->data;
        q.pop();
    }
}
int main()
{
    node *root=buildTree();
    printLevelBFS(root);
    int t;
    cin>>t;
    node* target=findTarget(root,t);
    cout<<target->data<<endl;
    printKthTarget(root,target,2);
}
//1 2 4 6 -1 -1 7 10 -1 -1 11 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 -1

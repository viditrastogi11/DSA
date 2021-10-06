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
node* lca(node* root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a||root->data==b)
    {
        return root;
    }
    node* left=lca(root->left,a,b);
    node* right=lca(root->right,a,b);
    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    if(left!=NULL)
    {
        return left;
    }
    return right;
}
int findlevel(node* root,int a,int level)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==a)
    {
        return level;
    }
    int l=findlevel(root->left,a,level+1);
    int r=findlevel(root->right,a,level+1);
    if(l!=-1)
    {
        return l;
    }
    return r;
}
int distancetwonode(node* root,int a,int b)
{
    node*l=lca(root,a,b);
    int p1=findlevel(l,a,0);
    int p2=findlevel(l,b,0);
    return p1+p2;
}
int main()
{
     node *root=buildTree();
    printLevelBFS(root);
    cout<<distancetwonode(root,4,10);
}
//1 2 4 6 -1 -1 7 10 -1 -1 11 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 -1

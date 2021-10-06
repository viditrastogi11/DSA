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
void print(node *root)
{

    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    print(root->left);
    print(root->right);
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
void printLevelKth(node *root,int k)
{
   if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data;
    }
    printLevelKth(root->left,k-1);
    printLevelKth(root->right,k-1);
}

int treeHeight(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(treeHeight(root->left),treeHeight(root->right))+1;
}
void printLevel(node* root)
{
    if(root==NULL)
    {
        return;
    }
    int h=treeHeight(root);
    for(int i=0;i<h;i++)
    {
        printLevelKth(root,i+1);
    }
}
int main()
{
node *root=buildTree();
print(root);
cout<<endl;
printLevelKth(root,5);
cout<<endl;
cout<<treeHeight(root);
cout<<endl;
printLevelBFS(root);
cout<<endl;
printLevel(root);
}
//5 6 2 -1 -1 3 4 -1 -1 -1 8 -1 23 9 -1 20 -1 -1 10 -1 -1

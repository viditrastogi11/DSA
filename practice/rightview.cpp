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



void rightview(node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    do{
        node* a=q.front();
        q.pop();
        node* b=q.front();
        if(a==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
            }
            cout<<endl;
        }
        else{
                if(b==NULL)
                {
            cout<<a->data<<" ";
                }
            if(a->left)
            {
            q.push(a->left);
            }
            if(a->right)
            {
            q.push(a->right);
            }

        }
    }while(!q.empty());
}
void rightviewrec(node* root,int &maxlevel, int level)
{
    if(root==NULL)
    {
        return;
    }
    if(maxlevel<level)
    {
        cout<<root->data<<endl;
        maxlevel++;
    }
    rightviewrec(root->left,maxlevel,level+1);
    rightviewrec(root->right,maxlevel,level+1);
}
int main()
{
    node *root=buildTree();
    int maxlevel=-1;
    rightviewrec(root,maxlevel,0);

}

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

node* buildFromTraversal(int in[],int pre[],int s,int e)
{
    static int i=0;
    if(s>e)
    {
        return NULL;
    }
    node * root=new node(pre[i]);
    int mid=0;
    for(int j=s;s<=e;j++)
    {
        if(in[j]==pre[i])
        {
            mid=j;
            break;
        }
    }
    i++;
    root->left=buildFromTraversal(in,pre,s,mid-1);
    root->right=buildFromTraversal(in,pre,mid+1,e);
    return root;
}
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    print(root->left);
    print(root->right);
    cout<<root->data<<" ";
}

int main()
{
    int in[8]={3,2,8,4,1,6,7,5};
   int pre[8]={1,2,3,4,8,5,6,7};
   node *root=buildFromTraversal(in,pre,0,7);
   print(root);

}



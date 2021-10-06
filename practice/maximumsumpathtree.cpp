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
pair<int,int> maximumsumpath(node* root)
{
    pair<int,int>p(0,0);
   if(root==NULL)
   {
       return p;
   }
   pair<int,int> ls=maximumsumpath(root->left);
    pair<int,int> rs=maximumsumpath(root->right);
   int s1=root->data;
   int s2=s1+ls.first;
   int s3=s1+rs.first;
   int s4=s1+ls.first+rs.first;
   p.first=max(max(s1,max(s2,s3)),0);
   p.second=max(0,max(rs.second,max(ls.second,max(s4,max(s1,max(s2,s3))))));
   return p;
}
int main()
{
     node *root=buildTree();
    printLevelBFS(root);
    pair<int,int> r=maximumsumpath(root);
    cout<<r.second;
}

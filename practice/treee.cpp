#include<bits/stdc++.h>
using namespace std;
typedef struct node{
int data;
struct node* left;
struct node* right;
}Node;
Node* insert(Node* root)
{
    Node* temp=new Node();
    cin>>temp->data;
    if(root==NULL)
    {
        root=temp;
        return root;
    }
    else{
            Node* root1=root;
        while(root!=NULL)
    {
        if(temp->data>root->data)
        {
            if(root->right==NULL)
            {
                root->right=temp;
                break;
            }
            else{
                root=root->right;
            }
        }
        else{
             if(root->left==NULL)
            {
                root->left=temp;
                break;
            }
            else{
                root=root->left;
            }
        }
    }
    return root1;
    }
}
void print(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}
int printHeight(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
   return max(printHeight(root->left),printHeight(root->right))+1;
}
void printKthLevel(node* root, int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
}
void printAllLevel(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    int k=printHeight(root);
    for(int i=1;i<=k;i++)
    {
        printKthLevel(root,i);
        cout<<endl;
    }
}
int main()
{
    int n,k;
    cin>>n;
    Node* root=NULL;
    for(int i=0;i<n;i++)
    {
        root=insert(root);
    }
    printAllLevel(root);
    cout<<endl;
    cout<<printHeight(root);
}

#include<bits/stdc++.h>
using namespace std;
typedef struct node{
int data;
struct node* next;
}node;
node* newLL(node * head,int val)
{
    if(head==NULL)
    {
        head=new node();
        head->data=val;
        return head;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node();
    temp->next->data=val;
    return head;
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
void zippedLL(node* head,node* curr,node* last)
{
      if(last->next->next==NULL)
      {

      }
      zippesLL(head,curr,last->next);

}
int main()
{
node* head =NULL;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int val;
    cin>>val;
   head= newLL(head,val);
}
print(head);
}

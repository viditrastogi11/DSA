#include<iostream>
using namespace std;
typedef struct node{

int data;
struct node* next;

} node;
node* insertlinked(node *head,int val)
{
    if(head==NULL)
    {
        head=new node();
        head->data=val;
        head->next=NULL;
        return head;
    }
    node *head1=head;
    while(head1->next!=NULL)
    {
        head1=head1->next;
    }
    node *temp=new node();
    temp->data=val;
    temp->next=NULL;
    head1->next=temp;
    return head;
}
void printlinked(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
node* deletekth(node *head,int k)
{
    int c=0;
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    if(c-k==0)
    {
        temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node *head1=head;
    while(c-k-1)
    {
        head=head->next;
        c--;
    }
    temp=head->next;
    head->next=temp->next;
    free(temp);
    return head1;
}
int main()
{
    node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
    head=insertlinked(head,val);
    }
    printlinked(head);
    int k;
    cin>>k;
   head= deletekth(head,k);
    printlinked(head);


}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void acode(int in[],char out[],int n,int i,int j)
{
    if(i==n)
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    out[j]=in[i]+'a'-1;
   acode(in,out,n,i+1,j+1);
   if(i+1!=n)
   {
        int val=out[j]-'a';
        val++;
        val=val*10+in[i];
        if(val<=26)
        {
             out[j]='a'+val;
   acode(in,out,n,i+2,j+1);
        }

   }
   return;
}
int main()
{
    int in[1000];
    char out[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in[i];
    }
    acode(in,out,n,0,0);

}

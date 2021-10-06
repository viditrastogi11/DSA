#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void pattern(int n,int ind,char *out,int i,int open,int close)
{
    if(ind==2*n)
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    if(open<n)
    {
        out[i]='(';
        pattern(n,ind+1,out,i+1,open+1,close);
    }
    if(close<open)
    {
        out[i]=')';
        pattern(n,ind+1,out,i+1,open,close+1);
    }

}
int main()
{
    int n;
    cin>>n;
    char out[1000];
    pattern(n,0,out,0,0,0);
}

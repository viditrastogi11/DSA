#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int> v,int i,int n ,int key,vector<int> &out,int j)
{
    if(i==n)
    {
        return j;
    }
    if(v[i]==key)
    {
        out[j]=i;

        j++;
    }
    return linear_search(v,i+1,n,key,out,j);
}

int main()
{
  int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>o(n);
    int j=0;
    j=linear_search(v,0,n,4,o,j);
    for(int i=0;i<j;i++)
    {
        cout<<o[i];
    }
}

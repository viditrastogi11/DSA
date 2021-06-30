#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    map<int,int> f;
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;
    }
    set<int> s;
    for(int i=0;i<m;i++)
    {
       if(f[b[i]])
       {
           s.insert(b[i]);
       }
    }
    for(auto x:s)
    {
        cout<<x<<" ";
    }

}

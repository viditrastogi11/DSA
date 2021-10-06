#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    int numofpair=0;
    for(auto p:m)
    {
        int j=p.second;
        numofpair+=((j-1)*j)/2;
    }
    cout<<numofpair;
}

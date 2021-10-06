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
    int k;
    cin>>k;
    int count=0;
    int* maxele=max_element(a,a+n);
    for(int i=0;i<n;i++)
    {
      if(a[i]+k>=*maxele)
      {
          count++;
      }
    }
    cout<<count;
}


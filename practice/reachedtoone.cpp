#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minreachone(int n)
{
    int arr[n+1];
    arr[1]=0;
    for(int i=2;i<=n;i++)
    {
        int j,k,l;
        j=k=l=INT_MAX;
      if(i%2==0)
      {
       j=arr[i/2];
      }
      if(i%3==0)
      {
          k=arr[i/3];
      }
      l=arr[i-1];
      arr[i]=min(min(j,k),l)+1;

    }
    return arr[n];
}
int main()
{
 int n;
 cin>>n;
 cout<<minreachone(n);
}

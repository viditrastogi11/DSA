#include<bits/stdc++.h>
using namespace std;

void shufflearray(int a[],int n)
{
      for(int k=0;k<n/2-1;k++)
      {
          int i=n/2-1-k;
          int j=n/2+k;
          while(i<j)
          {
              swap(a[i],a[i+1]);
              i=i+2;
          }
      }
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    shufflearray(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];

    }
}


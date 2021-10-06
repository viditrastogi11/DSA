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
    int l[n]={0},r[n]={0};
    l[0]=a[0];
    r[n-1]=a[n-1];
    cout<<l[0]<<" ";
    for(int i=1;i<n;i++)
    {
        l[i]=l[i-1]+a[i];
        cout<<l[i]<<" ";
    }
    int j=1;

     cout<<endl<<r[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
    {
        r[i]=r[i+1]+a[i ];
         cout<<r[i]<<" ";
        j++;
    }

}

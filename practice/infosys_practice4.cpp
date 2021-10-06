#include<bits/stdc++.h>
using namespace std;
int sumfun(int a[][2],int i,int n,int sum,int prev)
{
    if(i==n)
    {
        return sum;
    }
    if(a[i][0]<=prev&&a[i][1]<=prev)
    {
        return sum;
    }
    if(a[i][0]>prev&&a[i][1]>prev)
    {
       return max(sumfun(a,i+1,n,sum+a[i][0],a[i][0]),sumfun(a,i+1,n,sum+a[i][1],a[i][1]));
    }
    if(a[i][0]>prev)
    {
        return sumfun(a,i+1,n,sum+a[i][0],a[i][0]);
    }
    if(a[i][1]>prev)
    {
        return sumfun(a,i+1,n,sum+a[i][1],a[i][1]);
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n][2];

    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
    }
    cout<<sumfun(a,0,n,0,-1);
}


#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int matrixchaindp(int a[],int n)
{
    int dp[n][n];
    memset(dp,0,sizeof dp);
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<n-i;j++)
       {
           int l=i+j;
           dp[j][l]=INT_MAX;
           int c=dp[j+1][l]+a[j]*a[j+1]*a[l+1];
           int b=dp[j][l-1]+a[j]*a[l]*a[l+1];
           dp[j][l]=min(c,b);
       }

   }
    for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {


                cout<<dp[i][j]<<" ";

        }
        cout<<endl;
   }
   return dp[0][n-1];
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<matrixchaindp(a,n-1);
}

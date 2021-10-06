#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int ncr_dp_pascaltrianlge(int n,int r)
{
    long long int dp[n+1][n+1];
    memset(dp,0,sizeof dp);
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=1;
         for(int j=1;j<=i;j++)
         {
             dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
         }
    }
    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][r];
}
int main()
{
int n ,r;
cin>>n>>r;
cout<<ncr_dp_pascaltrianlge(n,r);
}

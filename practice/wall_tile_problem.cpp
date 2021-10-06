#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int noOfWaysTile(int n)
{
    int dp[n+1];
     dp[0]=1;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++)
    {
     dp[i]=dp[i-1]+dp[i-4];
    }
    return dp[n];
}
int noOfWaysTile(int n,int dp[])
{
    if(n<=3)
    {
        dp[n]=1;
        return dp[n];
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
       dp[n]= noOfWaysTile(n-1,dp)+noOfWaysTile(n-4,dp);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,0,sizeof(dp));
   cout<< noOfWaysTile(n);
}

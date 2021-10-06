#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nooOfWays(int n,int k)
{


    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
                dp[i]=dp[i]+dp[i-j];
            }

        }
    }
    return dp[n];
}
int noOfWays(int n,int k)
{


    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

    else{
          int ans=0;
            for(int i=1;i<=k;i++)
            {
                ans=ans+noOfWays(n-i,k);
            }
    return ans;
    }
}


int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    int k;
    cin>>k;
   cout<< noOfWays(n,k);
}


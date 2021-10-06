#include<iostream>
using namespace std;
int ladderways(int n,int k, int dp[])
{
 if(n==0 || n==1)
 {
     return 1;
 }
 if(dp[n]!=0)
 {
      return dp[n];
 }
 for(int i=1;i<=k;i++)
 {
     if(n-i>=0)
     {

     dp[n]=dp[n]+ladderways(n-i,k,dp);
     }
 }
 return dp[n];
}
int ladderwaysBU(int n,int k)
{
    int dp[n+1]={0};
 if(n==0 || n==1)
 {
     return 1;
 }
 dp[0]=1;
 dp[1]=1;
 for(int i=2;i<=n;i++)
 {
     for(int j=1;j<=k;j++)
     {
         if(i-j>=0)
         {
             dp[i]=dp[i-j]+dp[i];
         }
     }
 }
 return dp[n];
}
int ladderwaysopt(int n,int k)
{
    int dp[n+1]={0};
 if(n==0 || n==1)
 {
     return 1;
 }
 dp[0]=1;
 dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(n-k>=0)
        {
        dp[i]=2*dp[i-1]+dp[i-k-1];
        }
        else{
            dp[i]=2*dp[i-1];
        }

    }
}
int main()
{
    int n,k;
    cin>>n>>k;
   int dp[n+1]={0};
   cout<< ladderwaysBU(n,k);
}

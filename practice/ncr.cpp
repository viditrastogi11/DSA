#include<iostream>
using namespace std;
void fact(int n,long long int dp[])
{
    dp[0]=1;

    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]*i;
    }
}
long long ncr(int n,int r,long long int dp[])
{
    fact(n,dp);
   return dp[n]/(dp[r]*dp[n-r]);

}
int main()
{
    int n,r;
    cin>>n>>r;
    long long int dp[n+1];
   cout<< ncr(n,r,dp);
}

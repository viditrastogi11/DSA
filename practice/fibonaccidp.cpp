#include<iostream>
using namespace std;
long long int fibodp(int n,long long int dp[])
{
    if(n==0||n==1)
    {
        return n;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }

    return dp[n]=fibodp(n-1,dp)+fibodp(n-2,dp);;
}
int main()
{
    int n;
    cin>>n;
    long long int dp[n+1]={0};
    cout<<fibodp(n,dp);
}

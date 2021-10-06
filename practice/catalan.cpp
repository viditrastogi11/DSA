#include<iostream>
using namespace std;
long long int catalan(int n)
{
    long long int dp[n+1];
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+(dp[j]*dp[i-j-1]);
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[n];
}
int main()
{
    int n;

    cin>>n;
    cout<<catalan(n);

}

#include<iostream>
using namespace std;
long long int fibodp(int n)
{

   long long int dp[n+1]={0};
   dp[0]=0;
   dp[1]=1;
   for(int i=2;i<=n;i++)
   {
       dp[i]=dp[i-1]+dp[i-2];
   }
   return dp[n];
}
int main()
{
    int n;
    cin>>n;

    cout<<fibodp(n);
}


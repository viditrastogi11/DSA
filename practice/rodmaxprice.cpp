#include<iostream>
#include<limits.h>
using namespace std;
int max_price(int n,int arr[])
{
    if(n<=0)
    {
        return 0;
    }
    int price=INT_MIN;
    for(int i=0;i<n;i++)
    {
       int current_price=arr[i]+max_price(n-i-1,arr);
       price=max(price,current_price);
    }
    return price;

}
int max_price_dp(int n,int arr[])
{
    if(n<=0)
    {
        return 0;
    }
    int dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        int ans=INT_MIN;
        for(int j=0;j<i;j++)
        {
            int current_price=arr[j]+dp[i-j-1];
            ans=max(ans,current_price);
        }
        dp[i]=ans;
    }
    return dp[n];
}
int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max_price_dp(n,arr);
}

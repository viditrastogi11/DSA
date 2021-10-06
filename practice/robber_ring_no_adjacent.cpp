#include<iostream>
using namespace std;
int max_amountDP(int a[],int n)
{
    int dp[n];
    dp[0]=a[0];
    dp[1]=max(a[1],dp[0]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-2]+a[i],dp[i-1]);

    }
    return dp[n-1];

}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int max1= max_amountDP(arr,n-1);
   int max2=max_amountDP(arr+1,n-1);
   cout<<max(max1,max2);
}

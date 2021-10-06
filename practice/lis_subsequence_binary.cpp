#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lis(int n,int arr[])
{
    int dp[n+1];
    dp[0]=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        dp[i]=INT_MAX;
    }
    for(int i=0;i<n;i++)
    {
       int index= upper_bound(dp,dp+n+1,arr[i])-dp;
       if(dp[index-1]<arr[i] && arr[i]<dp[index])
       {
           dp[index]=arr[i];
       }
       for(int i=0;i<=n;i++)
    {
        cout<<dp[i]<<endl;
        if(dp[i]==INT_MAX)
        {
            break;
        }
    }
    }

    int maximum=0;
    for(int i=1;i<=n;i++)
    {

        if(dp[i]==INT_MAX)
        {
            cout<<endl;
            break;
        }
        maximum=i;
    }
    return maximum;
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

    cout<<lis(n,arr);
}


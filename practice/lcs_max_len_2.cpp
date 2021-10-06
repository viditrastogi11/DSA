#include<iostream>
#include<climits>
using namespace std;

int lis(int n,int arr[])
{
    int dp[n+1];
    dp[0]=INT_MIN;
    for(int i=1;i<=n;i++)
    {
     dp[i]=INT_MAX;
    }
    for(int i=0;i< n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(dp[j]<arr[i]&&arr[i]<dp[j+1])
           {
               dp[j+1]=arr[i];
           }
        }

    }
    int maximum=0;
    for(int i=1;i<=n;i++)
    {
        if(dp[i]!=INT_MAX){
            maximum=i;
        }
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

#include<iostream>
using namespace std;

int lis(int n,int arr[])
{
    int dp[n]={1};

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }

        }

    }
    int maximum=0;
    for(int i=1;i<n;i++)
    {
        maximum=max(dp[i],maximum);
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

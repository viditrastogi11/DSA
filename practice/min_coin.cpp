#include<iostream>
#include<limits.h>

using namespace std;
int mincoin(int n,int arr[],int amount,int dp[])
{
    if(amount==0)
    {
        return 0;
    }
    if(dp[amount]!=0)
    {
        return dp[amount];
    }
    int minimum=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(amount-arr[i]>=0)
        {
            minimum= min(minimum,mincoin(n,arr,amount-arr[i],dp));
        }
    }
    dp[amount]=minimum+1;
    return dp[amount];
}
int mincoinBU(int n,int arr[],int amount)
{
    if(amount==0)
    {
        return 0;
    }
    int dp[amount+1]= {0};

    for(int i=1; i<=amount; i++)
    {
         int minimum=INT_MAX;
        for(int j=0; j<n; j++)
        {
            if(i-arr[j]>=0)
            {
               minimum= min(minimum,dp[i-arr[j]]+1);
            }
        }
        dp[i]=minimum;
    }
    return dp[amount];

}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int amount;

    cin>>amount;
    int dp[amount+1]= {0};
    cout<< mincoinBU(n,arr,amount);
}

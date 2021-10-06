#include<iostream>
using namespace std;
int maxprice(int i,int j, int y,int arr[],int dp[][100])
{
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }
    dp[i][j]=max(arr[i]*y+maxprice(i+1,j,y+1,arr,dp),arr[j]*y+maxprice(i,j-1,y+1,arr,dp));
    return dp[i][j];
}
int maxpriceBU(int n,int arr[])
{
    int dp[n][n]={0};

    for(int i=n;i>=0;i--)
    {
        int j=0;
        while(j<i)
        {
            int k=n-i+j;
            if(j==k)
            {
                dp[j][k]=arr[k]*n;
            }

            else
            {
            dp[j][k]= max(dp[j+1][k]+(arr[j]*(n-(k-j))),dp[j][k-1]+(arr[k]*(n-(k-j))));
            }
            cout<<j<<k<<endl;
            j++;
        }
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<"  ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    int dp[100][100]={0};
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    cout<<maxpriceBU(n,arr);

}

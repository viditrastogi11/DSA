#include<iostream>
using namespace std;
int cell_mitosis(int n,int x,int y,int z)
{
    int dp[n+1];
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            dp[i]=min(dp[i-1]+y,dp[i/2]+x);
        }
        else{
                dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+x+z);
        }
    }

    return dp[n];
}
int main()
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
   cout<<cell_mitosis(n,x,y,z);

}

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
int dp[101][100002];
memset(dp,0,sizeof(dp));
class Solution{
public:
    bool isSubsetSum(int n, int arr[], int sum){
        // code here

        if(sum==0)
        {
            return true;
        }

        if(n==0)
        {

            return false;
        }
        if(dp[n][sum]!=-1)
        {
            return dp[n][sum];
        }
        if(sum<arr[n-1])
        {
        return isSubsetSum(n-1,arr,sum);
        }
        else{
         dp[n][sum]=  isSubsetSum(n-1,arr,sum) ||isSubsetSum(n-1,arr,sum-arr[n-1]);
        }
        return dp[n][sum];
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;

        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0;
}
  // } Driver Code Ends

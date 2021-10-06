// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        long long int a=1,b=1;
        if(n<2)
        {
            return n;
        }
        for(int i=2;i<=n;i++)
        {
          b=(a+b)%1000000007;
            a=(b-a)%1000000007;
            cout<<b<<endl;
        }
        return b;
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

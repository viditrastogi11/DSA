#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100000];
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int left=arr[i];
        for(int j=0;j<i;j++)
        {
            left=max(left,arr[j]);67
        }
          int right=arr[i];
        for(int j=i+1;j<n;j++)
        {
            right=max(right,arr[j]);
        }
        res=min(left,right)+res-arr[i];
    }
    cout<<res;
}

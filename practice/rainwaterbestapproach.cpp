#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int res=0;
    int leftmax=arr[0];
    int rightmax=arr[j];
    while(i<j)
    {
        if(arr[i]<arr[j])
        {
            if(arr[i]>leftmax)
            {
                leftmax=arr[i];
            }
            else
            {
                res=res+leftmax-arr[i];
            }
            i++;
        }
        else
        {
            if(arr[j]>rightmax)
            {
                rightmax=arr[j];
            }
            else
            {
                res=res+rightmax-arr[j];
            }
            j--;
        }
    }
    cout<<res;

}

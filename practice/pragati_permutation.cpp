#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int countmax=0;
    int c=1;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]<2)
        {
            c++;
        }
        else{
            c=1 ;
        }
        countmax=max(countmax,c);
    }
    cout<<countmax;
}

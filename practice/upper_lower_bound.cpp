#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,3,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int * lb=lower_bound(arr,arr+n,4);
     int * ub=upper_bound(arr,arr+n,4);
    cout<<lb-arr<<" "<<ub-arr;

}


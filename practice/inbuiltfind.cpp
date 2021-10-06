#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    auto it=find(arr,arr+n,5);
    if(it-arr==n)
    {
        cout<<"key not found";
    }
     else
    {
        cout<<"key found at "<<it-arr;;
    }

}

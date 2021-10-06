
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    bool present=binary_search(arr,arr+n,3);
    if(!present)
    {
        cout<<"key not found";
    }
     else
    {
        cout<<"key found";
    }

}

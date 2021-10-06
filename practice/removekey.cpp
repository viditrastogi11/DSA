#include<bits/stdc++.h>
using namespace std;

int removekey(int arr[],int n,int key)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            arr[i]=INT_MAX;
            c++;
        }
    }
    sort(arr,arr+n);
    return n-c;
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
     int c=removekey(a,n,key);
    cout<<endl;
    for(int i=0;i<c;i++)
    {
        cout<<a[i]<<endl;

    }
}


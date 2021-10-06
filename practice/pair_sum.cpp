#include<iostream>
using namespace std;

int main()
{
    int n,a[100],x,i;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
   int j=n-1;
   i=0;
   while(i<j)
   {
    int sum=a[i]+a[j];
    if(sum==x)
    {
        cout<<a[i]<<","<<a[j]<<endl;
        i++;
        j--;
    }
    else if(sum<x)
    {
        i++;
    }
    else{
        j--;
    }
   }
}

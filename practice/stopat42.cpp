#include <iostream>
#include<algorithm>
using namespace std;
long long int cut(int a[],int n,int mid)
{
   long long int sum=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>mid)
        {
            sum=sum+a[i]-mid;
        }
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int l=a[0];
    int u=a[n-1];

    while(l<u)
    {
        int mid=(l+u)/2;

       long long int val=cut(a,n,mid);
        if(m==val)
        {
            u=mid;
            break;
        }
        else if(m>val)
        {
            u=mid-1;
        }
        else
        {

            l=mid+1;
            if(mid>u)
            {
            	u=mid;
            }
        }
    }
    cout<<u;
    return 0;
}

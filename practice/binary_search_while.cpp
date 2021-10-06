#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        int i=0,j=n-1;
        int c=0,flag=0;
        while(i<=j)
        {
            int mid=(i+j)/2;

            if(a[mid]==k)
            {
                c++;
                flag=1;
                break;
            }
            else if(a[mid]<k)
            {
                i=mid+1;
                c++;
            }
            else{
                    c++;
                j=mid-1;
            }
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES "<<c<<endl;
        }
    }
}

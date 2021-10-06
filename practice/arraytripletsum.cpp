#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    sort(a,a+n);
   for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(int i=0;i<n;i++)
    {

        int l=i+1,r=n-1;
        while(l<r)
        {

            if(a[i]+a[l]+a[r]==target)
            {

                cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
                l++;
                r--;
            }
            else if(target>a[l]+a[r]+a[i])
            {

                l++;
            }
            else{

                r--;
            }
        }
    }

}

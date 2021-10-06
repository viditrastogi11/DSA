#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int sx=sqrt(x);
    return (sx*sx)==x;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c[n];
    c[0]=arr[0];
    int counta=0;
    for(int i=1;i<n;i++)
    {
        c[i]=arr[i]+c[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(check(c[i]))
        {
            counta++;
           // cout<<c[i];
        }
        for(int j=i+1;j<n;j++)
        {
        if(check(c[j]-c[i]))
        {
            counta++;
            //cout<<c[j]-c[i];
        }
        }
    }
    cout<<counta;
}

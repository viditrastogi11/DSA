#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int a[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
       reverse(a[i],a[i]+r);
    }

    for(int i=0;i<r-1;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

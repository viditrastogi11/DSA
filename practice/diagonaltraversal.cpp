#include<iostream>
using namespace std;
int main()
{
    int a[4][5]={ {1,2,3,4,5},{6,7,8 ,9,10},{11,12,13,14,15},{16,17,18,19,20} };
    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(a[0][0]);
    int n=(r+c)/2;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
       int j=0;
        while(j<=i)
        {
            cout<<a[n-i-1+j][j]<<" ";
            j++;
        }
        cout<<endl;
    }
    n=(r+c-1)/2;
    for(int i=n;i>=0;i--)
    {
        int j=0;
        while(j<i)
        {
            cout<<a[j][n-i+1+j]<<" ";
            j++;
        }
        cout<<endl;
    }
}

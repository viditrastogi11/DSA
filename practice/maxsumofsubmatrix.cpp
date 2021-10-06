#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    int prefix[100][100]= {0};
    for(int i=r-1; i>=0; i--)
    {
        for(int j=c-1; j>=0; j--)
        {
            if(j==c-1)
            {
                prefix[i][j]=a[i][j];
            }
            else
            {
             prefix[i][j]=a[i][j]+prefix[i][j+1];
            }
        }
    }
    for(int i=r-1; i>=0; i--)
    {
        for(int j=c-1; j>=0; j--)
        {
            if(i==r-1)
            {
                prefix[i][j]=prefix[i][j];
            }
            else
            {
             prefix[i][j]=prefix[i][j]+prefix[i+1][j];
            }
        }
    }
    int result=INT_MIN;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            result=max(result,prefix[i][j]);
            cout<<prefix[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<result;



}



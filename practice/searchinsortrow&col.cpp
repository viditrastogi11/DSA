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
    int key;
    cin>>key;
    int i=0;
   int  j=c-1;
    while(i<r &&j>=0)
    {
        if(a[i][j]==key)
        {
           cout<<key;
           break;
        }
        else if(key<a[i][j])
        {
           j--;
        }
        else
        {
           i++;
        }
        cout<<a[i][j];

    }
}

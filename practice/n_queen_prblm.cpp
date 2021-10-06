#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isSafe(int board[][1000],int n,int i ,int j)
{
    for(int k=0;k<i;k++)
    {
        if(board[k][j]==1)
        {
            return false;
        }
    }
    int x=i;
    int y=j;

    while(x>=0&&y>=0)
    {
        if(board[x][y]==1)
        {
            return false;

        }
        x--;
        y--;
    }
     x=i;
     y=j;

    while(x>=0&&y<n)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;

}
bool n_queen(int board[][1000],int n,int i)
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    for(int j=0;j<n;j++)
    {
        if(isSafe(board,n,i,j))
        {
            board[i][j]=1;
            if( n_queen(board,n,i+1))
            {
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n][1000];
    memset(arr,0,sizeof(arr));
   bool ans= n_queen(arr,n,0);
}

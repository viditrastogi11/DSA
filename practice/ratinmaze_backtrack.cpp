#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ratinmaze(char maze[10][10],int sol[][10],int i,int j,int m,int n)
{
if(i==m&&j==n)
{
    sol[i][j]=1;
    for(int k=0;k<=m;k++)
    {
        for(int l=0;l<=n;l++)
        {
            cout<<sol[k][l];
        }
        cout<<endl;
    }
    cout<<endl;
    return true;
}
if(i>m||j>n)
{
    return false;
}
if(maze[i][j]=='x')
{
    return false;
}
    sol[i][j]=1;
    bool rigth=ratinmaze(maze,sol,i,j+1,m,n);
    bool down=ratinmaze(maze,sol,i+1,j,m,n);
    sol[i][j]=0;
    if(right||down)
    {
        return true;
    }

        return false;
}
int main()
{
    char maze[10][10]={"0000","00x00","0x00","0000"};
    int sol[10][10];
    memset(sol,0,sizeof(sol));
    int n=4,m=4;
   bool a= ratinmaze(maze,sol,0,0,m-1,n-1);
}

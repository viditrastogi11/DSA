#include<bits/stdc++.h>
using namespace std;
bool canBePlace(int n,int arr[][9],int i,int j,int k)
{
    for(int l=0;l<n;l++)
    {
        if(arr[i][l]==k||arr[l][j]==k)
        {
            return false;
        }
    }
     int rs=sqrt(n);
     int sx=(i/rs)*rs;
     int sy=(j/rs)*rs;
     for(int i=sx;i<sx+rs;i++)
     {
          for(int j=sy;j<sy+rs;j++)
          {
              if(arr[i][j]==k)
              {
                  return false;
              }
          }
     }
     return true;
}
bool sudokuSolver(int n,int arr[][9],int i,int j)
{
    if(i==n)
    {
         for(int i=0;i<n;i++)
            {
          for(int j=0;j<n;j++)
          {
              cout<<arr[i][j]<<" ";
          }
          cout<<endl;
            }
        return true;
    }
    if(j==n)
    {
       return sudokuSolver(n,arr,i+1,0);
    }
    if(arr[i][j]!=0)
    {
      return  sudokuSolver(n,arr,i,j+1);
    }
    for(int k=1;k<=9;k++)
    {
        if(canBePlace(n,arr,i,j,k))
        {
            arr[i][j]=k;
            if(sudokuSolver(n,arr,i,j+1))
            {

            return true;
            }
        }
    }
    arr[i][j]=0;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[][9]={ {3, 0, 6, 5, 0, 8, 4, 0, 0},
         {5, 2, 0, 0, 0, 0, 0, 0, 0},
         {0, 8, 7, 0, 0, 0, 0, 3, 1},
         {0, 0, 3, 0, 1, 0, 0, 8, 0},
         {9, 0, 0, 8, 6, 3, 0, 0, 5},
         {0, 5, 0, 0, 9, 0, 6, 0, 0},
         {1, 3, 0, 0, 0, 0, 2, 5, 0},
         {0, 0, 0, 0, 0, 0, 0, 7, 4},
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };
       sudokuSolver(n,arr,0,0);
}

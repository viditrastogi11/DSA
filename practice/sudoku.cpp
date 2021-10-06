#include<bits/stdc++.h>
using namespace std;
bool check(int board[9][9],int i,int j,int n,int k)
{
	for(int l=0;l<n;l++)
	{
		if(board[i][l]==k||board[l][j]==k)
		{
			return false;
		}
	}
	int sq=sqrt(n);
	int s=(i/sq)*sq;
	int e=(j/sq)*sq;
	for(int l=s;l<s+sq;l++)
	{
		for(int m=e;m<e+sq;m++)
	{
	    cout<<l<<m<<" ";
		if(board[l][m]==k)
		{
			return false;
		}
	}
	}
	return true;
}
void print(int board[9][9])
{
    int n=9;
      for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}

}
bool fill( int board[9][9],int i,int j,int n)
{
	if(i==n-1&&j==n-1)
	{
   print(board);
		return true;
	}
	if(j==n)
	{
		return fill(board,i+1,0,n);
	}
	if(board[i][j]!=0)
	{

		return fill(board,i,j+1,n);
	}
	for(int k=1;k<=n;k++)
	{
	   // print(board);
		if(check(board,i,j,n,k))
		{

			board[i][j]=k;
			if(fill(board,i,j+1,n))
			{


				return true;
			}
		}
	}
	board[i][j]=0;
	return false;
}
int main() {
	int n;
	cin>>n;
	int board[9][9];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>board[i][j];
		}
	}
	bool f=fill(board,0,0,n);
	//cout<<f;

   print(board);
	return 0;
}

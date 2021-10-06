/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int k;
	cin>>k;
	while(k--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		long long int sum=0;
		for(int i=x1;i<=x2;i++)
		{
			for(int j=y1;j<=y2;j++)
			{
				sum=arr[i-1][j-1]+sum;
			}
		}
		cout<<sum<<endl;

	}
}

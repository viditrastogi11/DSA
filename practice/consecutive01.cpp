#include<iostream>
using namespace std;
int fun(int n,int i,int j)
{
	if(n==1)
	{
		return i+j;
	}
	return fun(n-1,j,i+j);
}
int main() {
	int t;
	while(t--)
	{
		int n;
		cin>>n;

		cout<<fun(n,1,1);
	}
	return 0;
}

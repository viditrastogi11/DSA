#include<iostream>
using namespace std;
int calculateTile(int n,int m)
{
	if(n<m)
	{
		return 1;
	}
	else if(n==m)
	{
		return 2;
	}
	else{
		return calculateTile(n-1,m)+calculateTile(n-m,m);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
int n,m;
	cin>>n>>m;

		cout<<calculateTile(n,m)<<endl;

	}

	return 0;
}

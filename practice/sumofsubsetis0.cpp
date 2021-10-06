#include<iostream>
using namespace std;
bool isSubsetSum(int n,int a[],int i,int j,int sum)
{
	if(i==n)
	{
		if(j==0)
		{
			return false;
		}
		return sum==0;
	}
	if(isSubsetSum(n,a,i+1,j,sum)||isSubsetSum(n,a,i+1,j+1,sum+a[i]))
	{
		return true;
	}
	return false;



}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],sol[10000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(isSubsetSum(n,a,0,0,0))
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}

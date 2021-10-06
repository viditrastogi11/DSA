#include<iostream>
#include<algorithm>
using namespace std;
bool verify(long long int a[],int n,int m,long long int mid)
{
	int left=0;
	int cow=1;
	for(int i=1;i<n&&cow<m;i++)
	{
		if(a[i]-a[left]>=mid)
		{
			cow++;
			left=i;
		}
	}
	if(cow>=m)
	{
		return true;
	}
	else{
		return false;
	}
}
int main() {
	int t;
	cin>>t;
	while(t)
	{
	int n,m;
	cin>>n>>m;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int l=0;
	long long int u=a[n-1];
	long long int ans=0;
	while(l<=u)
	{
		long long int mid=(l+u+1)/2;
		if(verify(a,n,m,mid))
		{
			ans=mid;
			l=mid+1;
		}
		else{
			u=mid-1;
		}
	}
	cout<<ans;
	t--;
	}

	return 0;
}

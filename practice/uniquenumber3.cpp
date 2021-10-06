#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v{64,0};
	int n;
	cin>>n;
	for(int i=0;i<64;i++)
		{
			cout<<v[i];
		}
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		int j=0;
		while(t)
		{
			if(t&1)
			{
				v[j]=v[j]+1;
			}
			j++;
			t=t>>1;
		}

	}
	int ans=0;
		int j=1;

		cout<<ans<<endl;
	return 0;
}

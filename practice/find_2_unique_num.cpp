#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=a[i]^res;
	}
	int c=res;
	int count=0;
	while(c)
	{

		if(c&1)
		{
			break;
		}
		count++;
		c=c>>1;
	}
	c=1;
	c<<count;
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(c&a[i])
		{
			b=b^a[i];
		}
	}
	c=b^res;
	if(b>c)
	{
		cout<<c<<" "<<b;
	}
	else{
		cout<<b<<" "<<c;
	}
	return 0;

}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countbit(int n)
{
	int count=0;
	while(n)
	{
		if(n&1)
		{
			count++;
		}
		n=n>>1;
	}
	return count;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int counts=0;
		while(a<=b)
		{
			counts=counts+countbit(a);
			a++;
		}
		cout<<counts;
	}

}

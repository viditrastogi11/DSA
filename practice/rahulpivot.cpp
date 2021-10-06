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
	int key;
	cin>>key;
	int l=n-1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			l=i;
			break;
		}

	}


		if(binary_search(a,a+l+1,key))
		{
			int *lb= lower_bound(a,a+l+1,key);
			cout<<lb-a;
		}
		else if(binary_search(a+l+1,a+n,key)){
			int *lb=lower_bound(a+l+1,a+n,key);
			cout<<lb-a;
		}



	return 0;
}

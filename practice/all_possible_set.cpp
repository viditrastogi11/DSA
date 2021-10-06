
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

	for(int i=0;i<1<<n;i++)
    {
        int j=0;
        int k=i;
        while(k!=0)
        {
            if(k&1)
            {
                cout<<a[j];
            }
        k=k>>1;
        j++;
        }
        cout<<endl;
    }
}

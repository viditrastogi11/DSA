#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int l=1;
	sort(a,a+n);
	int i=0;
	while(i!=k)
    {
        cout<<a[n-1-i]<<" ";
        i++;
    }

	return 0;
}

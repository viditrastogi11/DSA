#include<iostream>
#include<algorithm>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t)
	{
		int n;
		int arr[10000];
		int i=0,sum=0,maxsum=0;
		cin>>n;
		int j=n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int second=0;
		while(i!=j)
		{
			sum=sum+arr[i];
			if(sum<0 && second!=0)
            {
                break;
            }
			if(sum<0)
			{
				sum=0;
				j=i;
			}
			maxsum=max(sum,maxsum);
			i++;
			if(i==n && j!=n)
			{
				i=0;
				second++;
			}

		}

		cout<<maxsum<<endl;
		t--;
	}
	return 0;
}

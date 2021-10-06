#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	int a[1000],b[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int minimum=min(n,m);
	int i=n-1,j=m-1;
	int carry=0;

		if(i>=j)
		{
			while(j>=0)
			{
				int sum=a[i]+b[j]+carry;
				a[i]=sum%10;
				carry=sum/10;
				i--;
				j--;
			}
			if(i<0 && carry!=0)
			{
				a[0]=a[0]+(carry*10);
				carry=0;
			}
			while(i>0 && carry!=0)
			{
				int sum=a[i]+carry;
				a[i]=sum%10;
				carry=sum/10;
				i--;
			}
			if(carry!=0)
			{
				a[i]=a[i]+carry;
			}
			for(int i=0;i<n;i++)
			{
			    if(i==0&&a[i]>9)
                {
                    int sec=a[0]%10;
                    a[0]=a[0]/10;
                    int first=a[0]%10;
                    cout<<first<<", "<<sec<<", ";
                    continue;
                }
				cout<<a[i]<<", ";

			}
		}
		else{
			while(i>=0)
			{
				int sum=a[i]+b[j]+carry;
				b[j]=sum%10;
				carry=sum/10;
				i--;
				j--;
			}
			while(j>0 && carry!=0)
			{
				int sum=b[j]+carry;
				b[j]=sum%10;
				carry=sum/10;
				j--;
			}
			if(carry!=0)
			{
				b[j]=b[j]+carry;
			}
			for(int i=0;i<m;i++)
			{
			      if(i==0&&a[i]>9)
                {
                    int sec=a[0]%10;
                    a[0]=a[0]/10;
                    int first=a[0]%10;
                    cout<<first<<", "<<sec<<", ";
                    continue;
                }
				cout<<b[i]<<", ";
			}

		}
		cout<<"END";
	return 0;
}

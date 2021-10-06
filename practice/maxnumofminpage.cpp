#include<iostream>
using namespace std;
bool verify(int a[],int n,int s,int mid)
{
	int totalPage=0;
	int student=1;
	for(int i=0;i<n;i++)
	{
		totalPage=totalPage+a[i];
		if(totalPage>mid)
		{
			student++;
			totalPage=a[i];
			if(student>s)
			{
				return false;
			}
		}
	}
	return true;
}
int main() {
int t;

cin>>t;
while(t)
{
int n;
int s;
cin>>n>>s;
int a[n];
int totalPage=0;
for(int i=0;i<n;i++)
{
	cin>>a[i];
	totalPage=totalPage+a[i];
}
int l=a[0];
int u=totalPage;
int mid,ans=0;
while(l<=u)
{
	mid=(l+u)/2;
	if(verify(a,n,s,mid))
	{
	    ans=mid;
		u=mid-1;
	}
	else{
		l=mid+1;
	}
}
cout<<"ans:"<<ans;
	t--;

}
}

#include<iostream>
using namespace std;
int maxchar(string s,char a,char b,int swap)
{
	int n=s.length();
	int maxcount=0;
	for(int i=0;i<n;i++)
	{
		int j=i;
		int k=swap;
		int count=0;
		while(j!=n && k>=0)
		{
			if(s[j]==b && k==0)
			{
				break;
			}
			if(s[j]==b)
			{
				k--;
			}
			count++;
			maxcount=max(maxcount,count);
			j++;
		}
	}
	return maxcount;
}
int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	int maxa=maxchar(s,'a','b',k);
	int maxb=maxchar(s,'b','a',k);
	int maxcount=max(maxa,maxb);
	cout<<maxcount<<maxa<<maxb;
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	int maxa=0;
	int j=k;
	int first=-1;
	int counta=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='b')
		{
			if(first==-1)
			{
				first=i;
			}
			if(j==0)
			{

				j=k;
				maxa=max(counta,maxa);
				counta=0;

				continue;
			}
			j--;
		}
		counta++;
		maxa=max(counta,maxa);

cout<<maxa;
	}
	cout<<maxa;
	return 0;
}

#include<iostream>
using namespace std;
bool isPallindrome(int s[],int i,int n)
{
	if(i>=n)
	{
		return true;
	}
	if(s[i]!=s[n]){

		return false;
	}
	else
	{

		return isPallindrome(s,i+1,n-1);
	}
}
int main() {
	int n;
	cin>>n;
	int s[10000];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<boolalpha<<isPallindrome(s,0,n-1);
	return 0;
}

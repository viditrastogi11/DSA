#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;										// Reading input from STDIN
	int n=s.length();
	long long int sum=s[0]-'0';
	long long int c=sum;
	for(int i=1;i<n;i++)
	{
	c=c*10+(i+1)*(s[i]-'0');
	cout<<c<<endl;
	c=c%1000000007;
	sum=(c+sum)%1000000007;
	}
	cout<<sum;
}

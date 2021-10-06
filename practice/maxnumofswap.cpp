#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	auto ub=upper_bound(s.begin(),s.end(),'a');
	int a=ub-s.begin();

	int b=s.length()-a;
	if(a>b)
	{
	    cout<<s[a];
		b>n?a=a+n:a=a+b;
		cout<<a<<endl;
	}
	else
	{
		a>n?b=b+n:b=b+a;
		cout<<b<<endl;
	}
	return 0;
}

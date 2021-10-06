#include<iostream>
using namespace std;
string fun(string s,int i)
{
	if(i==s.length()-1)
	{
		return s;
	}
	if(s[i]==s[i+1])
	{
		s.insert(i+1,"*");
		//return fun(s,i+2);
	}
	return fun(s,i+1);
}
int main() {
	string s;
	cin>>s;
	cout<<fun(s,0);
	return 0;
}

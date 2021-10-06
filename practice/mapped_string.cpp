#include<iostream>
using namespace std;
char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void print(string inp,string out,int i,int j)
{
	if(i==inp.length())
	{
		cout<<out<<endl;
		return;
	}
	out.push_back(arr[inp[i]-'0'-1]);
	print(inp,out,i+1,j+1);
	out.pop_back();
	if(i>=1)
	{
int val=out.back()-'A'+1;
	val=val*10+(inp[i]-'0');

	if(val<=26)
	{
		out.pop_back();
		out.push_back(arr[val-1]);
		print(inp,out,i+1,j+1);
		out.pop_back();
	}
	}

	return;
}
int main() {
	string s,p;
	cin>>s;
	print(s,p,0,0);
	return 0;
}

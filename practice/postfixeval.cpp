/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string c[100000];									// Reading input from STDIN
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		c[i]=s;
	}
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		if(c[i].length()==1&& c[i][0]<'0')
		{
			int opr2=s.top();
			s.pop();
			int opr1=s.top();
			s.pop();
			if(c[i][0]=='*')
			{
				s.push(opr1*opr2);
			}
			else if(c[i][0]=='-')
			{
s.push(opr1-opr2);
			}
			else if(c[i][0]=='+')
			{
s.push(opr1+opr2);
			}
			else
			{
s.push(opr1/opr2);
			}
		}
		else
		{
			s.push(atoi(c[i].c_str()));
		}
	}
	cout<<s.top()<<endl;
}

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
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			s.erase(i-1,2);
			i=0;
		}
	}
	if(s.empty())
	{
		cout<<"Empty String";
	}
	else{

	cout<<s;
	}
}

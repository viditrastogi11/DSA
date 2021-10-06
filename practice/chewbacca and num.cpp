#include<iostream>
using namespace std;
int main() {
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++)
	{

		if('9'-n[i]+48<n[i])
		{
		    if(i==0 && '9'-n[i]==0){
                continue;
		    }
			n[i]='9'-n[i]+48;
		}

	}
	cout<<n;
	return 0;
}

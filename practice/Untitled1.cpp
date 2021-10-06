#include<iostream>
using namespace std;
bool checkprime(long long num)
{
	if(num==0 || num==1)
	{
		return false;
	}
	for(int i=2;i<30;i++)
	{
		if(num%i==0 && i!=num)
		{
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			for(int k=0;k<i;k++)
            {
                cout<<s[j+k];
            }
            cout<<endl;
        }
		cout<<endl;

	}
	cout<<count;
	return 0;
}

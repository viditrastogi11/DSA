#include<iostream>
#include<algorithm>
using namespace std;
bool compare(string s1,string s2)
{
	int len1=s1.length();
	int len2=s2.length();
	if(len1==len2)
	{
		return s1>s2;
	}
	else if(len1<len2)
	{
		int i=0;
		for( i=0;i<len1;i++)
		{
			if(s1[i]==s2[i])
			{
				continue;
			}
			else
			{
				return s1[i]>s2[i];
			}

		}

		if(s2[i]<s1[0])
        {
            return true;
        }
		else
        {
            return false;
        }
	}
	else{

            int i=0;
		for(i=0;i<len2;i++)
		{
			if(s1[i]==s2[i])
			{
				continue;
			}
			else
			{
				return s1[i]>s2[i];
			}

		}

		if(s1[i]<s2[0])
        {
            return false;
        }
		else
        {
            return true;
        }
	}
}
int main() {
	int t;
	cin>>t;
	while(t)
	{
		string arr[1000];
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m,compare);

	for(int i=0;i<m;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
		t--;
	}

	return 0;
}

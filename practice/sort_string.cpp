#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string s ,string t)
{
    int key;
	cin>>key;
	bool rev;
	cin>>boolalpha;
	cin>>rev;
	char comparison[50];
	cin>>comparison;
	if(key==1)
    {
        char *ptr=strtok(s," ");
        char *p=strtok(t," ");
        if(comparison=="numeric")
        {
            return atoi(ptr)>atoi(p);
        }
    }
}
int main() {
	int n,i;
	cin>>n;
	string s[n];
	cin.get();
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	sort(s,s+n,compare);
	return 0;
}

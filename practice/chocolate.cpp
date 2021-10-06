#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	for(int k=0;k<testcase;k++)
    {
    int n,r;
	cin>>n>>r;
	int a[n],b[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int tension=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            tension=b[i];
        }
        else
        {

            tension-=(r*(a[i]-a[i-1]));
            if(tension<0)
            {
                tension=0;
            }
            tension+=b[i];

        }

    }
    cout<<tension;
    }
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=0;
    int s=1;
    cout<<f<<endl<<s<<endl;
    for(int i=2;i<7;i++)
    {
        int sum=f+s;
        cout<<sum<<endl;
        f=s;
        s=sum;
    }
}

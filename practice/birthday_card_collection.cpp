#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    map<int,int>f;
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;
    }
    int c=0;
    for(int i=1;i<=d;i++)
    {
        if(f[i]==0)
        {
            if(d>=i)
            {
                cout<<i<<" ";
                d=d-i;
                c++;
            }
        }
    }
    cout<<endl<<c;
}

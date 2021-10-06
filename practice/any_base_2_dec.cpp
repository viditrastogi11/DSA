#include<iostream>
using namespace std;
int main()
{
    string f;
    float res=0.0;
    int base;
    cin>>f>>base;
    int l=f.length();
    int p=f.find('.');
    if(p==-1)
    {
     p=l;
    }
    float j=1;
    for(int i=p-1;i>=0;i--)
    {
        res=res+(f[i]-'0')*j;
        j=j*base;
    }
    if(p!=l)
    {
        j=base;
    for(int i=p+1;i<l;i++)
    {
        res=res+(f[i]-'0')/j;
        j=j*base;
    }
    }
    cout<<res<<endl;

}


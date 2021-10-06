#include<bits/stdc++.h>
using namespace std;
string fun(int n,string s[])
{
    string a="";
    for(int i=0;i<n;i++)
    {
        int l=s[i].length();
       s[i][0]= tolower(s[i][0]);
       s[i][l-1]= tolower(s[i][l-1]);
        if((s[i][0]=='a'||s[i][0]=='e'||s[i][0]=='i'||s[i][0]=='o'||s[i][0]=='u')&&(s[i][l-1]=='a'||s[i][l-1]=='e'||s[i][l-1]=='i'||s[i][l-1]=='o'||s[i][l-1]=='u'))
        {
            a=a+s[i];
        }
    }
    for(int i=0;i<a.length();i++)
    {
        a[i]=tolower(a[i]);
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<fun(n,s);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int k;
    cin >>k;
    int l=0,i=0;
    string p=s;
    while(i<s.length())
    {
        if(s[i]==' ')
        {
            for(int j=0;j<k;j++)
            {
            char c=s[i-1];
            s.insert(l,1,c);
            s.erase(s.begin()+i);
            cout<<s<<endl;
            }
            l=i+1;
        }
        i++;
    }
    for(int j=0;j<k;j++)
            {
            char c=s[i-1];
            s.insert(l,1,c);
            s.erase(s.begin()+i);
            cout<<s<<endl;
            }
    cout<<s<<" "<<p;
}

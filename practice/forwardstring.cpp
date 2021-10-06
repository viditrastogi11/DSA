#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<int>v;
    int n=s.length();
    int countl=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            v.push_back(countl);
            countl=0;
        }
        else{
            countl++;
        }
    }
    if(s[n-1]!=' ')
    {
        v.push_back(countl);
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            j++;
        }
        else{
                if(s[i]+v[j]>'z'||s[i]+v[j]>'Z')
                {
                    if(s[i]>'Z')
                    {
                        s[i]='z';
                    }
                    else{
                        s[i]='Z';
                    }
                }
                else{

            s[i]=s[i]+v[j];
                }

        }
    }
    cout<<s;
}

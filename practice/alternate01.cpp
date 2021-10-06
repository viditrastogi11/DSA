#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int counta=0;
    for(int i=0;i<n-1;i++)11101000
    {
        if(s[i]==s[i+1])
        {
            for(int j=i+2;j<n;j++)
            {
             if(s[j]==s[j+1]&&s[i]!=s[j])
             {
                 reverse(s.begin()+i+1,s.begin()+j+1);
                 counta++;
                 break;
             }
             if(j==n-1)
             {
                  reverse(s.begin()+i+1,s.begin()+j+1);
                 counta++;
             }
            }
        }
    }
    cout<<counta<<s;
}

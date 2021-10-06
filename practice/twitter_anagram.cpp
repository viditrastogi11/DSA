#include<bits/stdc++.h>
using namespace std;
bool anagrams(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    if(s1==s2)
    {
        return true;
    }
    int countl[256]={0};
    for(int i=0;i<s2.length();i++)
    {
     countl[s1[i]]++;
     countl[s2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(countl[i]!=0)
        {
            return false;
        }
    }
    return true;
}
void num_of_anagram(int n,vector<string>words, map<string,int> &f)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(anagrams(words[i],words[j]))
        {
           f[words[i]]++;
        }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string>words(n);
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    int m;
    cin>>m;
    cin.ignore();
    vector<string>sentence(m);
    for(int i=0;i<m;i++)
    {

        getline(cin,sentence[i]);
    }
    map<string,int> f;
    num_of_anagram(n,words,f);
    int c=0;
    for(int i=0;i<m;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            size_t a=sentence[i].find(words[j]);
            if(a!=string::npos &&f[words[j]]>1 )
            {
                c=c+f[words[j]];
            }
        }
    cout<<endl<<c;
    }
}
/*4
listen silent it is
1
listen it is silent
*/

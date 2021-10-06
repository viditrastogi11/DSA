#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>f,pair<int,int>s)
{
    return f.first<s.first;
}
int main()
{
    int n;
    cin>>n;
    int exp;
    cin>>exp;
    vector<pair<int,int>>mon(n);
    for(int i=0;i<n;i++)
    {
        cin>>mon[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>mon[i].second;
    }
    sort(mon.begin(),mon.end(),compare);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(exp<mon[i].first)
        {
         break;
        }
        exp=exp+mon[i].second;
        count++;
    }
    cout<<count;
}

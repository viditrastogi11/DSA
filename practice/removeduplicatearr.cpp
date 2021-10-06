#include<bits/stdc++.h>
using namespace std;

int removeduplicate(vector<int>& v)
{
    if(v.size()==0)
        return 0;
    int u=1;
    int l=v.size();
    for(int i=0; i<l-1; i++)
    {
        if(v[i]!=v[i+1])
        {
            v[u]=v[i+1];
            u++;
        }
    }
    return u;
}
int main()
{

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    int u=removeduplicate(v);
    cout<<endl;
    for(int i=0;i<u;i++)
    {
        cout<<v[i]<<endl;

    }
}

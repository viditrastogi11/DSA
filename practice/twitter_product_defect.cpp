#include<bits/stdc++.h>
using namespace std;
int prodDefect(int n,int m,vector<vector<int>>&a)
{
    vector<vector<int>>t(n,vector<int>(m));
    int maxe=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t[i][j]=a[i][j];
            if(i>0 && j>0 && a[i][j]==1)
            {
                t[i][j]=min(t[i][j-1],min(t[i-1][j],t[i-1][j-1]));
                t[i][j]++;
            }
            if(maxe<t[i][j])
            {
                maxe=t[i][j];
            }
        }
    }
        return maxe;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<prodDefect(n,m,a);


}

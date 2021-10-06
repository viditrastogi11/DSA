#include<bits/stdc++.h>
using namespace std;
int counta=0;

void fun(int i,int n,int k, vector<int>&v)
{
    if(i==k)
    {
        counta++;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int j=1;j<=n;j++)
    {
        if(i==0||j%v[i-1]==0)
        {
         v.push_back(j);

         fun(i+1,n,k,v);
         v.pop_back();
        }
    }

}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    fun(0,n,k,v);
   cout<<counta;
}

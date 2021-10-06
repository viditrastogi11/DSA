#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSort(vector<int>&v,int i,int n)
{

    if(i+1==n)
    {
        return true;
    }
    if(v[i]<v[i+1] && isSort(v,i+1,n))
    {
        return true;
    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<isSort(v,0,n);
}

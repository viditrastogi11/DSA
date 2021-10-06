#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mine=INT_MAX;
    for(int i=n-1;i>0;i--)
    {
       mine= min(a[i]-a[i-1],mine);
    }
    for(int i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]==mine){
        cout<<a[i]<<" "<<a[i+1]<<endl;
       }
    }

}

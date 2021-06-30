#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int r,c;
    cin>>r;
    cin>>c;
    for(int i=0;i<r;i++)
    {
     vector<int> r;
         for(int j=0;j<c;j++)
         {
            int n;
            cin>>n;
            r.push_back(n);
         }
         v.push_back(r);
    }
    int maxsum=INT_MIN,richcust=0;

    for(int i=0;i<r;i++)
    {
     int sum=0;
         for(int j=0;j<c;j++)
         {
           sum=sum+v[i][j];
         }

         if(maxsum<sum)
         {

             maxsum=sum;
             richcust=i+1;
         }

    }
    cout<<richcust;


}

#include <bits/stdc++.h>

using namespace std;
int sumofarr(int a[],int s,int n)
{
    int sum=0;
    for(int i=s;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int sumofvectorpair( vector<pair<int,int>> v,int s,int n)
{
    int sum=0;
    for(int i=s;i<n;i++)
    {
        sum=sum+v[i].second;
    }
    return sum;
}
int GetMaximumShipping(int capacity[],int oil[],int cost[],int n,int c)
{
   if(c==n)
   {
       return sumofarr(oil,0,n);
   }
    else
    {
        vector<pair<int,int>> v;
         vector<pair<int,int>> s;
        for(int i=0;i<n;i++)
       {
            pair<int,int> p;
            p.first=capacity[i];
            p.second=oil[i];
           v.push_back(p);
        }
          for(int i=0;i<n;i++)
       {
            pair<int,int> p;
            p.first=capacity[i];
            p.second=cost[i];
           s.push_back(p);
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());

       for(int i=n-1;i>0;i--)
       {
             for(int j=n-c-1;j>=0;j--)
             {
                  int cap=v[i].first-v[i].second;
                 if(cap>0)
                 {
                     if(s[i].second==0)
                     {

                         if(cap>v[j].second)
                   {
                       v[i].second+=v[j].second;
                       v[j].second=0;
                   }
                    else
                    {
                         v[i].second+=cap;
                          v[j].second-=cap;
                    }
                     }
                 }
             }
       }

        for(int i=n-1;i>0;i--)
        {
             int first=0;
            for(int j=n-c-1;j>=0;j--)
            {
                int cap=v[i].first-v[i].second;
                if(cap!=0)
                  {
                     if(first==0)
                      {
                          v[i].second-=s[i].second;
                         if(v[i].second<0)
                         {
                             v[i].second=0;
                         }
                          first++;
                      }
                   cap=v[i].first-v[i].second;
                   if(cap>v[j].second)
                   {
                       v[i].second+=v[j].second;
                       v[j].second=0;
                   }
                    else
                    {
                         v[i].second+=cap;
                          v[j].second-=cap;
                    }

                  }
            }

        }

        int sum=sumofvectorpair(v,n-c,n);
        return sum;


     }
}
int main(){
    int N;
    cin>>N;
    int capacity[N];
    for(int j = 0;j < N;j++){
        cin>>capacity[j];
    }
    int oil[N];
    for(int j = 0;j < N;j++){
        cin>>oil[j];
    }
    int cost[N];
    for(int j = 0;j < N;j++){
        cin>>cost[j];
    }
    int C;
    cin>>C;
    int result;
    result = GetMaximumShipping(capacity,oil,cost,N,C);
    cout<<result;
    return 0;
}

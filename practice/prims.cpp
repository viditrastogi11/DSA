#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    static bool comp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
    {
       return a.second<b.second;
    }
    int v;
    vector<pair<int,int>> *l;
    graph(int v)
    {
        this->v=v;
        l=new vector<pair<int,int>> [v];
    }
    void addEdge(int x,int y,int weight)
    {
        l[y].push_back({x,weight});
        l[x].push_back({y,weight});
    }
    int prims()
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        Q.push({0,0});
        vector<bool>vis(v,false);
        int ans=0;

        while(!Q.empty())
        {

           auto p=Q.top();
           int to=p.second;
           int weight=p.first;
           Q.pop();
           if(vis[to])
           {
               continue;
           }
           vis[to]=true;
           ans=ans+weight;

           for(auto k:l[to])
           {
               if(!vis[k.first])
               {
                Q.push({k.second,k.first});
               }
           }
        }
        return ans;
    }

};
int main()
{
    graph g(4);
    g.addEdge(1,2,4);
    g.addEdge(2,3,6);
    g.addEdge(3,0,2);
    g.addEdge(0,1,5);
    cout<<g.prims();
}


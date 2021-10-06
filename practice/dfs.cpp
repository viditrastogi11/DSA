#include<bits/stdc++.h>
using namespace std;
class graph{
  public:
  map<int,list<int>>g;
  void addEdge(int a,int b)
  {
      g[a].push_back(b);
      g[b].push_back(a);
  }
  void dfs(int src,map<int,bool> &visited)
  {
      cout<<src;
      visited[src]=true;

      for(auto e:g[src])
      {
          if(!visited[e])
          {
              dfs(e,visited);
          }
      }

  }
   void printadjlist()
    {
        for(auto l:g)
        {
            cout<<l.first<<" : ";
            for(auto i:l.second)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g;
        g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
     g.addEdge(0,3);
    g.addEdge(3,4);
     g.addEdge(4,5);
     //g.printadjlist();
     map<int,bool> visited;
 g.dfs(0,visited);
}

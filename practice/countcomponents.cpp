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
    void countcomponent()
    {
      map<int,bool> visited;
      int c=0;
      for(auto p:g)
      {

          if(!visited[p.first])
          {
              cout<<"for component "<<c+1<<" : ";
              dfs(p.first,visited);
              c++;
              cout<<endl;
          }

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
     g.addEdge(5,6);
     g.addEdge(6,7);
     g.addEdge(8,8);
     //g.printadjlist();

 g.countcomponent();
}

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
  void bfs(int src)
  {
      map<int,bool>visit;
      queue<int>q;

      q.push(src);
      visit[src]=true;
      while(!q.empty())
      {
          int n=q.front();
          q.pop();
          for(int a:g[n])
          {
              if(!visit[a])
              {
                  q.push(a);
                  visit[a]=true;
              }
          }
          cout<<n<<" ";
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
     g.printadjlist();
 g.bfs(3);
}

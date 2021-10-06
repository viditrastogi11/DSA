#include<bits/stdc++.h>
using namespace std;
class graph{
  public:
  map<int,list<int>>g;
  void addEdge(int a,int b)
  {
      g[a].push_back(b);

  }
  void bfs(int src,int dest)
  {
      map<int,int>visit;
      map<int,int>parent;
      queue<int>q;

      q.push(src);
      visit[src]=1;
      parent[src]=src;
      while(!q.empty())
      {
          int n=q.front();
          q.pop();
          for(int a:g[n])
          {
              if(visit[a]==0)
              {
                  q.push(a);
                  visit[a]=visit[n]+1;
                  parent[a]=n;
              }
          }

          {
          cout<<n<<" "<<visit[n]-1<<endl;
          }
      }
      int t=dest;
      while(t!=src)
      {
          cout<<t<<"<--";
          t=parent[t];
      }
      cout<<src;
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
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;
    graph g;
    for(int i=1;i<=36;i++)
    {
        if(board[i]!=0)
        {
            g.addEdge(i,i+board[i]);
            continue;
        }
        for(int dice=1;dice<=6;dice++)
        {

            int j=i+dice;
            if(j<=36)
            {
            g.addEdge(i,j);
            if(board[j]+j<=36)
            {
                 g.addEdge(i,j+board[j]);
            }
            }
        }
    }
    g.addEdge(36,36);

 g.bfs(1,36);
}


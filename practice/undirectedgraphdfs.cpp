
#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    map<int,list<int>> g;

    void addEdge(int x,int y)
    {
       g[x].push_back(y);
       g[y].push_back(x);


    }
    bool isCycle(int src,map<int,bool>&visited,map<int,int>&parent)
    {
        visited[src]=true;
        for(auto e:g[src])
        {
            if(visited[e]==false)
            {
                parent[e]=src;
               bool val= isCycle(e,visited,parent);
               if(val==false)
               {
                   return val;
               }
            }
            else if(parent[src]!=e)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    graph g;
    g.addEdge(1,2);
    g.addEdge(2,4);
    g.addEdge(1,3);
   // g.addEdge(3,4);

    map<int,bool>visited;
    map<int,int>parent;
    if(g.isCycle(1,visited,parent))
    {
          cout<<"not cycle";

    }
    else{
       cout<<"cycle";
    }
}

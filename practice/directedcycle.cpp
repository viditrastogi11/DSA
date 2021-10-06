
#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    map<int,list<int>> g;

    void addEdge(int x,int y)
    {
       g[x].push_back(y);


    }
    bool isCycle(int src,map<int,bool>&visited,map<int,bool>&path)
    {
        visited[src]=true;
        path[src]=true;
        for(auto e:g[src])
        {
            if(visited[e]==false)
            {
               bool val= isCycle(e,visited,path);
               if(val==false)
               {
                   return val;
               }
            }
            else if(path[e]==true)
            {
                return false;
            }
        }
        path[src]=false;
        return true;
    }
};
int main()
{
    graph g;
    g.addEdge(7,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(1,5);
    g.addEdge(5,6);
   //g.addEdge(4,2);
    map<int,bool>visited;
    map<int,bool>path;
    if(g.isCycle(7,visited,path))
    {
          cout<<"not cycle";

    }
    else{
       cout<<"cycle";
    }
}

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
    bool isCycle(int src)
    {
        map<int,bool>visited;
        map<int,int>parent;
        queue<int>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            for(auto e:g[n])
            {
             if(visited[e]!=true)
             {
                 q.push(e);
                 parent[e]=n;
                 visited[e]=true;
             }
             else if(visited[e]==true&&parent[n]!=e)
             {
                 return false;
             }
            }
            cout<<n;
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
    g.addEdge(3,4);
    if(g.isCycle(1))
    {
        cout<<"cycle";
    }
    else{
        cout<<"not cycle";
    }
}

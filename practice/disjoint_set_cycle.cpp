#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    int v;
    list<pair<int,int>> l*;
    graph(int v)
    {
        this->v=v;
        l=new list<pair<int,int>>[v];
    }
    void addEdge(int x,int y)
    {
        l.push_back(make_pair(x,y));
    }
    int find_parent(int i,int parent[])
    {
        if(parent[i]==-1)
        {
            return i;
        }
        return find_parent(parent[i],parent);
    }
    void union_set(int x,int y,int parent[])
    {
        int s1=find_parent(x,parent);
        int s2=find_parent(y,parent);
        if(s1!=s2)
        {
            parent[s1]=s2;
        }

    }
    bool contain_cycle()
    {
        int *parent=new int[v];
    }
};

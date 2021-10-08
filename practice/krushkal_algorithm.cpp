#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    static bool comp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
    {
       return a.second<b.second;
    }
    int v;
    list<pair<pair<int,int>,int>> l;
    graph(int v)
    {
        this->v=v;
       // l=new list<pair<int,int>>[v];
    }
    void addEdge(int x,int y,int weight)
    {
        l.push_back(make_pair(make_pair(x,y),weight));
        l.push_back(make_pair(make_pair(y,x),weight));
    }
    int find_parent(int i,int parent[])
    {
        if(parent[i]==-1)
        {
            return i;
        }
        return parent[i]= find_parent(parent[i],parent);
    }
    void union_set(int x,int y,int parent[],int ranks[])
    {
        int s1=find_parent(x,parent);
        int s2=find_parent(y,parent);
        if(s1!=s2)
        {
            if(ranks[s1]<ranks[s2])
            {
            parent[s1]=s2;
            ranks[s2]=ranks[s1]+ranks[s2];
            }
            else{
                parent[s2]=s1;
                ranks[s1]=ranks[s1]+ranks[s2];
            }

        }
        return;
    }
    list<pair<pair<int,int>,int>> khrushkal()
    {
        int *parent=new int[v+1];
         int *ranks=new int[v+1];
list<pair<pair<int,int>,int>> b;
        for(int i=0;i<v;i++)
        {
            parent[i]=-1;
            ranks[i]=1;
        }
       l.sort(comp);
       for(auto p:l)
       {
        cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
        int i=p.first.first;
        int j=p.first.second;
        int s1=find_parent(i,parent);
        int s2=find_parent(j,parent);
        if(s1!=s2)
        {
            union_set(i,j,parent,ranks);
        b.push_back(make_pair(make_pair(i,j),p.second));
        b.push_back(make_pair(make_pair(j,i),p.second));
        }
       }

        delete []parent;
        return b;
    }
};
int main()
{
    graph g(4);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,0,2);
    g.addEdge(0,1,4);
   list<pair<pair<int,int>,int>> b=g.khrushkal();
    for(auto p:b)
       {
        cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
       }
}


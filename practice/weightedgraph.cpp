#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    map<string,list<pair<string,int>>> e;

    void addEdge(string a,string b,bool bidir,int weight)
    {
        e[a].push_back(make_pair(b,weight));
        if(bidir)
        {
             e[b].push_back(make_pair(a,weight));
        }
    }
    void printgraph()
    {
        for(auto p:e)
        {
            cout<<p.first+"->";
            for(auto k:p.second)
            {
                cout<<k.first<<" "<<k.second<<" ,";
            }
            cout<<endl;
        }
    }

};
int main()
{
    graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("B","D",true,30);
     g.addEdge("A","C",true,10);
      g.addEdge("C","D",true,40);
       g.addEdge("A","D",false,50);
    g.printgraph();
}

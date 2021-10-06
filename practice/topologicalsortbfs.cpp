#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
  public:
  map<T,list<T>>g;
  void addEdge(T a,T b)
  {
      g[a].push_back(b);

  }
  void topologicalsort()
  {
     map<T,int> indegree;
     for(auto p:g)
     {
         for(auto e:p.second)
         {
             indegree[e]++;
         }
     }
     queue<T>q;
     for(auto p:g)
     {
         if(indegree[p.first]==0)
         {
             q.push(p.first);
         }
     }
     while(!q.empty())
     {
         T n=q.front();
         q.pop();
         cout<<n<<endl;
         for(auto e:g[n])
         {
             indegree[e]--;
             if(indegree[e]==0)
             {
                 q.push(e);
             }
         }
     }

  }

};
int main()
{
    graph<string> g;
        g.addEdge("python","Datapreprocessing");
        g.addEdge("python","pytorch");
        g.addEdge("python","ML");
        g.addEdge("Datapreprocessing","ML");
        g.addEdge("pytorch","DL");
        g.addEdge("ML","DL");
        g.addEdge("DL","Facerecogn");
        g.addEdge("Dataset","Facerecogn");

     //g.printadjlist();

 g.topologicalsort();
}

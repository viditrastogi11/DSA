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
  void dfs(T src,map<T,bool> &visited,list<T>&ordering)
  {
     // cout<<src;
      visited[src]=true;
      for(auto e:g[src])
      {
          if(!visited[e])
          {
              dfs(e,visited,ordering);
          }
      }
      ordering.push_front(src);

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
      map<T,bool> visited;
      list<T>ordering;
      int c=0;
      for(auto p:g)
      {

          if(!visited[p.first])
          {
              dfs(p.first,visited,ordering);
          }
      }
      for(auto l:ordering)
      {
          cout<<l<<endl;
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

 g.countcomponent();
}

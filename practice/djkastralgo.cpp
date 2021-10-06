 #include<bits/stdc++.h>
using namespace std;

template<typename T>
class graph{
 public:
  map<T,list<pair<T,int>>> m;
 void addEdge(T x,T y,int w)
 {
     m[x].push_back(make_pair(y,w));
     m[y].push_back(make_pair(x,w));
 }
 void djksastra(T src)
 {
     map<T,int>dist;
     for(auto p:m)
     {
         dist[p.first]=INT_MAX;
     }
     dist[src]=0;
     set<pair<int,T>>s;
     s.insert(make_pair(0,src));
     while(!s.empty())
     {
         auto p=*(s.begin());
         int d=p.first;
         T node=p.second;
         s.erase(s.begin());
         for(auto l:m[node])
         {
             if(l.second+d<dist[l.first])
             {
                 auto f=s.find(make_pair(dist[l.first],l.first));
                 if(f!=s.end())
                 {
                     s.erase(f);
                 }
                 dist[l.first]=l.second+d;
                 s.insert(make_pair(dist[l.first],l.first));
             }
         }


     }
       for(auto p:dist)
     {
         cout<<p.first<<" : "<<p.second<<endl;
     }
     cout<<endl;

 }
};
int main()
{
    graph<string> g;
    g.addEdge("amritsar","delhi",1);
     g.addEdge("amritsar","jaipur",4);
      g.addEdge("jaipur","delhi",2);
     g.addEdge("jaipur","mumbai",8);
     g.addEdge("bhopal","agra",2);
      g.addEdge("mumbai","bhopal",3);
     g.addEdge("agra","delhi",1);
    g.djksastra("amritsar");
}

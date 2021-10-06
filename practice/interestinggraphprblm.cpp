
 #include<bits/stdc++.h>
using namespace std;

template<typename T>
class graph{
 public:
  map<T,list<pair<T,pair<int,int>>>> m;
 void addEdge(T x,T y,int w1,int w2)
 {
     m[x].push_back(make_pair(y,make_pair(w1,w2)));
     m[y].push_back(make_pair(x,make_pair(w1,w2)));
 }
 map<T,int> djksastra(T src)
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
             if(l.second.first+d<dist[l.first])
             {
                 auto f=s.find(make_pair(dist[l.first],l.first));
                 if(f!=s.end())
                 {
                     s.erase(f);
                 }
                 dist[l.first]=l.second.first+d;
                 s.insert(make_pair(dist[l.first],l.first));
             }
         }
     }
       for(auto p:dist)
     {
         cout<<p.first<<" : "<<p.second<<endl;
     }
     return dist;
 }
};
int main()
{
    graph<string> g;
    g.addEdge("amritsar","delhi",1,2);
     g.addEdge("amritsar","jaipur",4,6);
      g.addEdge("jaipur","delhi",2,4);
     g.addEdge("jaipur","mumbai",8,9);
     g.addEdge("bhopal","agra",2,5);
      g.addEdge("mumbai","bhopal",3,2);
     g.addEdge("agra","delhi",1,8);

      map<string,int> dist1= g.djksastra("amritsar");
      map<string,int> dist2=g.djksastra("mumbai");
      cout<<endl;
      cout<<dist1["mumbai"];


      return 0;
}

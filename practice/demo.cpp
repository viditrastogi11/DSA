#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main() {
    map<char,int>s;
    s['a']=1;
    s['b']=1;
    s['a']--;
    s['b']--;
   for(auto p:s)
   {

       cout<<p.first<<p.second;
   }
	return 0;
}

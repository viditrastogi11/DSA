#include<bits/stdc++.h>

using namespace std;
int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n<1)
        {
            return 0;
        }
        map<int,int> m;
        int count=1;
        int maxl=0;
        int i=0,j=0;
        while(j<n)
        {
          if(m[s[j]]==0)
          {
              m[s[j]]++;
              j++;
              maxl=max(maxl,j-i);
              for(auto a:m)
              {
                  cout<<a.first<<" ";
                  cout<<a.second<<endl;
              }
              cout<<endl;
          }else{
              m[s[j]]--;
             for(auto a:m)
              {
                  cout<<a.first<<" v-";
                  cout<<a.second<<endl;
              }
              cout<<endl;
              i++;
          }

        }
        return maxl;
    }
int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}

#include<bits/stdc++.h>
using namespace std;

 bool myCanCross(vector<int>& stones,int i,int j)
    {
        if(i==stones.size()-1)
        {
            return true;
        }
         if(binary_search(stones.begin()+i,stones.end(),stones[i]+j))
            {
                   int k= lower_bound(stones.begin()+i,stones.end(),stones[i]+j)-stones.begin();
             if(j==1)
                {
                   return myCanCross(stones,k,j)||myCanCross(stones,k,j+1);

                }
             else
             {
                 return myCanCross(stones,k,j)||myCanCross(stones,k,j+1)||myCanCross(stones,k,j-1);
             }
            }
        return false;


    }
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<myCanCross(v,0,0);
}

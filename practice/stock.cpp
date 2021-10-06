#include<bits/stdc++.h>
using namespace std;
 int maxpro(vector<int>& prices,int i,vector<int>&maxp)
    {
        if(prices.size()-1==i)
        {

            return prices[i];
        }
        int j=maxpro(prices,i+1,maxp);
        int m=j-prices[i]>0?j-prices[i]:0;
        maxp[0]=max(m,maxp[0]);
        cout<<maxp[0]<<endl;
        if(i==0)
        {
            return maxp[0];
        }
        return j>prices[i]?j:prices[i];
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
    vector<int> i(1);
   cout<< maxpro(v,0,i);

}

#include<bits/stdc++.h>
using namespace std;

vector<long> be(vector<long>a,vector<long>b)
{
    vector<long>ans(a.size());
    for(int i=0;i<a.size();i++)
    {
        long x=0,y=a[i];
        while(x<=y)
        {
            if((x^y)==b[i])
            {

                ans[i]=(2*x+3*y);
                break;
            }
            x++;
            y--;
        }

    }
    return ans;

}
int main()
{
    vector<long>a{29,36,57};
    vector<long>b{25,18,23};
    vector<long>ans=be(a,b);
    for(int i=0;i<a.size();i++)
    {
        cout<<ans[i];
    }
}

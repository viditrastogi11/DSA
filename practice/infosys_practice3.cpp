#include<bits/stdc++.h>
using namespace std;
 int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1,INT_MAX);
        v[0]= INT_MIN;
        v[1]=nums[0];
        int ans=1;
         for(int i=1;i<n;i++)
         {
             int index=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
             v[index]=nums[i];
         }
        for(int i=1;i<=n;i++)
        {
            if(v[i+1]==INT_MAX)
            {
                break;
            }
            if(((v[i]&v[i+1])*2)<(v[i]|v[i+1]))
            {
            ans++;
            }
        }
        return ans;
    }
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<lengthOfLIS(v)<<endl;
}

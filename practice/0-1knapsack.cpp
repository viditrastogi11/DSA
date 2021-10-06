#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int p[],int n,int c)
{
    if(n==0||c==0)
    {
        return 0;
    }
    int inc=0;
    if(w[n-1]<=c)
    {
     inc=p[n-1]+knapsack(w,p,n-1,c-w[n-1]);
    }
    return max(inc,knapsack(w,p,n-1,c));
}
int main()
{
    int weight[10000],price[10000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>price[i];
    }
    int capacity;
    cin>>capacity;
    cout<<knapsack(weight,price,n,capacity);
}

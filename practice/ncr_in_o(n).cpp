#include<iostream>
using namespace std;
long long int fact(int n,int k)
{
   long long int res=1;
    if(k>(n-k))
        k=n-k;
    for(int i=0;i<k;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<fact(n,r);

}

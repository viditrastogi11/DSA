
#include<iostream>
using namespace std;
long long int fact(int n,int k)
{
    int res=1;
    if(k>(n-k))
        k=n-k;
    for(int i=0;i<k;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
long long int catalan(int n)
{
   long factorial_binomial_coef=fact(2*n,n);
   return factorial_binomial_coef/(n+1);
}
int main()
{
    int n;

    cin>>n;
    cout<<catalan(n);

}

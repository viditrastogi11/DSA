#include<bits/stdc++.h>
using namespace std;
int power (int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int smaller_part=power(a,b/2);
    smaller_part*=smaller_part;
    if(b&1)
    {
        return smaller_part*a;
    }
    return smaller_part;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}

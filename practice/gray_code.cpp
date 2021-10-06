#include<iostream>
using namespace std;
int g (int n) {
    return n ^ (n >> 1);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<g(i);

    }
}

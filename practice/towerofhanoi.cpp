#include<bits/stdc++.h>
using namespace std;
void move(int n,char s,char h,char d)
{
    if(n==0)
    {
        return;
    }
    move(n-1,s,d,h);
    cout<<"move "<<n<<"disk from "<<s<<" to "<<d<<endl;
    move(n-1,h,s,d);
}
int main()
{
    int n;
    cin>>n;
    move(n,'A','B','C');
}

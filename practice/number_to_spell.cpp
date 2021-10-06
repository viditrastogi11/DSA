#include<bits/stdc++.h>
using namespace std;
string spell(int n)
{

    if(n==0)
    {
        return "";
    }
    int r=n%10;
    string res;
    if(r==1)
    {
        res="one ";
    }
    else if(r==3)
    {
        res="three ";
    }
    else if(r==4)
    {
        res="four ";
    }
    else if(r==0){
        res="zero ";
    }
    else if(r==2)
    {
        res="two ";
    }
    else if(r==8)
    {
        res="eight ";
    }
    else{
        res="unspell ";
    }
    return res+spell(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<spell(n);
}

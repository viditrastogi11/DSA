#include<iostream>
using namespace std;
int main()
{
    string f;
    float res=0.0;
    int base,j;
    cin>>f;
    int l=f.length();
    int p=f.find('.');
     float d=stof(f.substr(p,l));
    if(p==-1)
    {
     d=0;
     p=l;
    }
    int n=stoi(f.substr(0,p));

    int i=1;
    while(n)
    {
        int r=n%base;
        n=n/base;
        res=res+r*i;
        i=i*10;
    }
    float ans=0;
    if(p!=l)
    {
        float i=10;

       for(int j=0;j<4;j++)
       {
           d=d*base;
           int r=d;
           d=d-r;
           ans=ans+(r/i);
           i=i*10;
       }
    }
    printf("%.4f",res+ans);

}


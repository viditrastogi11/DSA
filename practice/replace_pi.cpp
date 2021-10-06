#include<bits/stdc++.h>
using namespace std;
void replacepi(char a[],int i)
{
    if(a[i]=='\0'||a[i+1]=='\0')
    {

        return;
    }
    if(a[i]=='p'&&a[i+1]=='i')
    {

        int j=i+2;
       while(a[j]!='\0')
       {
           j++;
       }

       while(j>=i+2)
       {
           a[j+2]=a[j];
           j--;
       }
       a[i]='3';
       a[i+1]='.';
       a[i+2]='1';
       a[i+3]='4';
       replacepi(a,i+4);

    }
    else{
        replacepi(a,i+1);
    }
}
int main()
{
    char r[1000];


        cin>>r;

    replacepi(r,0);
    cout<<r;
}

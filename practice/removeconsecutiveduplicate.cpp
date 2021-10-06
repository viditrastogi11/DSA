#include<iostream>
#include<cstring>
using namespace std;
void removeDuplicate(char a[])
{
    int i=0,j=1,len=strlen(a);
    while(j!=len)
    {
        if(a[i]!=a[j])
        {
            i++;
            a[i]=a[j];
            j++;
        }
        else
        {
            j++;
        }
    }
    a[i+1]='\0';
    cout<<a;
}
int main()
{
    char a[100];
    cin.getline(a,100
                );
    removeDuplicate(a);
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    char index[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>index[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[index[i]-'0'];
    }


}

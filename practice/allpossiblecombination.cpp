#include<iostream>
using namespace std;
int main()
{
    int n,k,l=0;
    cin>>n>>k;
    for(int i=1; i<=n-k+1; i++)
    {
        if(k>1)
        {
            for(int j=i; j<=n-k+1; j++)
        {
            cout<<i;
            int l=1;
            while(l!=k)
            {
                cout<<j+l;
                l++;
            }
            cout<<endl;
        }
        }
        else{
            cout<<i<<endl;
        }


    }
}

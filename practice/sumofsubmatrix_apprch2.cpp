#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    int prefix[r][c]= {0};
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(j>0)
            {
                prefix[i][j]=a[i][j]+prefix[i][j-1];
            }
            else
            {
                prefix[i][j]=a[i][j];
            }

        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i>0)
            {
                prefix[i][j]=prefix[i-1][j]+prefix[i][j];
            }


        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<prefix[i][j]<<" ";

        }
        cout<<endl;
    }
    int sum=0;
    for(int li=0; li<r; li++)
    {
        for(int lj=0; lj<c; lj++)
        {
            for(int bi=li; bi<r; bi++)
            {
                for(int bj=lj; bj<c; bj++)
                {
                    if(li>0 && lj>0)
                    {
                     sum+=prefix[bi][bj]-prefix[li-1][bj]-prefix[bi][lj-1]+prefix[li-1][lj-1];
                    }
                    else if(li>0){
                         sum+=prefix[bi][bj]-prefix[li-1][bj];
                    }
                    else if(lj>0)
                    {
                         sum+=prefix[bi][bj]-prefix[bi][lj-1];
                    }
                    else{
                        sum+=prefix[bi][bj];
                    }
                }
            }


        }
    }
    cout<<sum;

}

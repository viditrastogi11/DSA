#include<iostream>
#include<algorithm>
using namespace std;
int submatrixsum(int li,int lj,int bi,int bj,int prefix[][100])
{
                    int sum=0;
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
                    return sum;
}
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
    int prefix[100][100]= {0};
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
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int tli,tlj,bri,brj;
        cin>>tli>>tlj>>bri>>brj;
         cout<<submatrixsum(tli,tlj,bri,brj,prefix);
    }

}


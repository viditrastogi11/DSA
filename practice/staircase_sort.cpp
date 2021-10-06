#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int ti=0;ti<r;ti++)
    {
        for(int tj=0;tj<c;tj++)
        {
            for(int bi=ti;bi<r;bi++)
            {
                for(int bj=tj;bj<c;bj++)
                {
                    int s=0;
                    for(int i=ti;i<=bi;i++)
                    {
                        for(int j=tj;j<=bj;j++)
                        {
                            s+=a[i][j];
                            sum+=a[i][j];
                        }
                    }
                    cout<<s<<endl;
                }
            }
        }
    }
    cout<<sum;
}

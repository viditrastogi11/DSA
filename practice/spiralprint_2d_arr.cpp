#include<iostream>
using namespace std;
int main()
{
    int a[100][100];

    int i,j,r,c;
    cin>>r;
    cin>>c;
    int rr=0;
    int rc=r-1;
    int cc=0;
    int cr=c-1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    while(rr<=rc && cc<= cr)
    {
        for(i=rr;i<=cr;i++)
        {
            cout<<a[rr][i];
        }
        rr++;
        cout<<endl;
         for(i=rr;i<=rc;i++)
        {
            cout<<a[i][cr];
        }
        cr--;
         cout<<endl;
         if(rr<rc)
         {
                      for(i=cr;i>=cc;i--)
        {
            cout<<a[rc][i];
        }
        rc--;
         cout<<endl;
         }

           if(cc<cr)
         {
              for(i=rc;i>=rr;i--)
        {
            cout<<a[i][cc];
        }
        cc++;

         }

         cout<<endl;
    }

}

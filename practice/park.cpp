#include<iostream>
using namespace std;
int main()
{
    int r,c,k,s;
    char arr[100][100];
    cin>> r>>c;
	 cin>>k>>s;
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }


    int i=0;
    while(i<r && s>k)
    {
        int j=0;
        while(j<c && s>k)
        {

            if(arr[i][j]=='#')
            {
                break;
            }
            else if(arr[i][j]=='*')
            {
                s=s+5;

                j++;
            }
            else
            {
                s=s-2;

                j++;
            }
            if(j!=c-1)
            {
                s--;
            }

        }
        i++;
    }
    if(s>k)
    {
    cout<<"Yes"<<endl<<s;

    }
    else{
        cout<<"No";
    }


}

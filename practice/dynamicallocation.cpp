#include<iostream>
using namespace std;
int main()

{

    int* *b=new int*[3];

    for(int i=0;i<3;i++)
    {
        b[i]=new int [5];
    }
   int val=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
    {
        b[i][j]=val;
        val++;
    }

    }
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
    {
        cout<<b[i][j]<<" ";

    }
     cout<<endl;
    }

}

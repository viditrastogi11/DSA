#include<iostream>
using namespace std;
int main()
{
    int input2[]={1,2,4,-3,5};
    int input1=5;
    int maxs=0;
    int curr=0;
    for(int i=0;i<input1;i++)
    {
     if(input2[i]<0)
     {
        maxs=max(maxs,curr);
        curr=0;
     }
     else
     {
         curr=curr+input2[i];
         maxs=max(maxs,curr);
     }
    }
    cout<<maxs;
}

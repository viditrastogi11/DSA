#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int matrixchainrec(int a[],int i,int j)
{
    if(i==j)
    {
    return 0;
    }
    int min=INT_MAX;
    int count;
    for(int k=i;k<j;k++)
    {

        count=matrixchainrec(a,i,k)+matrixchainrec(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(count<min)
        {
            min=count;
        }
    }
    return count;

}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<matrixchainrec(a,1,n-1);
}

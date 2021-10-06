#include<iostream>
using namespace std;
int main(){
    int n,csum=0,maxsum=0,left,right,a[20],cummulativesum[20]={0};
    cin>>n;
    cin>>a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        csum=csum+a[i];
        if(csum<0)
        {
            csum=0;
        }
        maxsum=max(csum,maxsum);
    }
    printf("%d",maxsum);


}

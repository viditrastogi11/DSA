#include<iostream>
using namespace std;
int main(){
    int n,csum=0,max=0,left,right,a[20],cummulativesum[20]={0};
    cin>>n;
    cin>>a[0];
    cummulativesum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cummulativesum[i]=a[i]+cummulativesum[i-1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            csum=cummulativesum[j]-cummulativesum[i-1];
            if(csum>max)
            {
                max=csum;
                left=i;
                right=j;
            }
        }
    }
    cout<<left<<","<<right<<endl;
    cout<<max<<endl;
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<",";
    }

}

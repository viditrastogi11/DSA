#include<iostream>
using namespace std;
int main(){
    int n,csum=0,max=0,left,right,a[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            csum=0;
            for(int k=i;k<j;k++)
                {
                 csum+=a[k];
                }
            if(csum>max)
            {
                max=csum;
                left=i;
                right=j;
            }
        }
    }
    cout<<max<<endl;
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<",";
    }

}

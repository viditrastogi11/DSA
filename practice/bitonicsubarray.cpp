#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        int arr[10000];
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int maxcount=0;
        int count=0;
        for(int i=1; i<n; i++)
        {
            if(arr[i-1]>arr[i])
            {
                for(int j=i; j<n; j++)
                {
                    if(arr[j-1]<arr[j])
                    {
                        break;
                    }
                    count++;
                }
                maxcount=max(count,maxcount);
                count=-1;
            }
            count++;
            maxcount=max(count,maxcount);
        }
        cout<<maxcount+1<<endl;
        t--;
    }
    return 0;
}

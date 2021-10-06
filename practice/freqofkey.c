#include<stdio.h>

void find_freq_binarysearch(int arr[],int l, int r,int x)
{

    if(r<l)
    {
        printf("not found");
        return;
    }
    int mid =(l+r)/2;
    if(arr[mid]==x)
    {
        if(arr[mid-1]!=arr[mid]&&arr[mid+1]!=arr[mid])
        {
            printf("1");
            return;
        }

        else
        {
            int count=1;
            int temp=mid;
            while(arr[mid+1]==arr[mid])
            {
                mid++;
                count++;

            }
            mid=temp;
            while(arr[mid-1]==arr[mid]&&(mid-1)>=0)
            {
                mid--;
                count++;

            }
            printf("%d\n",count);
            return;
        }

    }
    else if(arr[mid]>x)
    {
        find_freq_binarysearch(arr,l,mid-1,x);
    }
    else
    {
       find_freq_binarysearch(arr,mid+1,r,x);
    }

}



main()
{
    int test_num,i,n,j,x;
    printf("enter num of test cases:");
    scanf("%d",&test_num);
    for(i=0; i<test_num; i++)
    {
        printf("enter length of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter element of array %d:",i+1);
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("enter a num:");
        scanf("%d",&x);
        find_freq_binarysearch(arr,0,n-1,x);
    }
}

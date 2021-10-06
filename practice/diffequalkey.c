#include<stdio.h>

void find_pair(int arr[],int n,int x)
{
    int count=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
              if(arr[i]-arr[j]==x||arr[j]-arr[i]==x)
              {
                  count++;
              }
            }
    }
    printf("%d\n",count);
    return;
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
        printf("enter key:");
        scanf("%d",&x);
        find_pair(arr,n,x);
    }
}


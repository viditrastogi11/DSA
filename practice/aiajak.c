#include<stdio.h>
int binarysearch(int arr[],int l, int r,int x)
{
    if(r<l)
    {
        return -1;
    }
    int mid =(l+r)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        binarysearch(arr,l,mid-1,x);
    }
    else
    {
      binarysearch(arr,mid+1,r,x);
    }

}

void find_index(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int index=binarysearch(arr,j,n,arr[i]+arr[j]);
            if(index>0)
            {
             printf("%d,%d,%d\n",i+1,j+1,index+1);
             return;
            }
        }
    }
    printf("No sequence found\n");
}

main()
{
int test_num,i,n,j,x;
printf("enter num of test cases:");
scanf("%d",&test_num);
for(i=0;i<test_num;i++)
{
 printf("enter length of array:");
 scanf("%d",&n);
 int arr[n];
  printf("enter element of array %d:",i+1);
 for(j=0;j<n;j++)
 {
 scanf("%d",&arr[j]);
 }
  find_index(arr,n);
 //binarysearch(arr,0,n-1,x);

}
}

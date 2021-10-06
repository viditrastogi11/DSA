#include<stdio.h>
void binarysearch(int arr[],int l, int r,int x)
{
    if(r<l)
    {
printf("NO\n");
    }
    int mid =(l+r)/2;
    printf("%d",mid);
    if(arr[mid]==x)
    {
        printf("%d",mid);
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
 printf("enter a num:");
 scanf("%d",&x);
 //find_index(arr,n);
 binarysearch(arr,0,n-1,x);

}
}

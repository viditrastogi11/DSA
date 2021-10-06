#include<stdio.h>
void jumpSearch(int arr[],int n,int x)
{
    int jump = 1;
    int prev=1;
    int count=1;
    int i;
    if(arr[0]==x){

        printf("key is present\n");
        printf("comparison:1\n");
        return;
    }
    while(x>arr[jump] && jump<n){
        prev = jump;
        jump = jump*2;
        count++;
        if(jump > n - 1){
            jump = n;
            break;
        }
    }

    for(i = prev; i<=jump; i++) {
      if(arr[i] == x)
      {
        printf("key is present\n");
        printf("comparison:%d\n",count);
        return;
      }

   }
   printf("Not present\n");
    printf("Comparison:%d\n",count);
    return;
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
printf("enter key:");
scanf("%d",&x);
jumpSearch(arr,n,x);

}
}

#include<iostream>
using namespace std;
void bubble_sort(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j+1],a[j]);
            }
        }
    }
}
void selection_sort(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        int curr=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[curr])
            {
                curr=j;
            }
        }
        swap(a[i],a[curr]);
    }
}
void insertion_sort(int n,int a[])
{
      for(int i=1;i<n;i++)
      {
          int j=i-1;
          while(j>=0)
          {
             if(a[j+1]>a[j])
             {
                 break;
             }
             else{
                swap(a[j],a[j+1]);
             }
             j--;
          }
      }
}
int quick_partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(pivot>a[j])
        {
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quick_sort(int l,int r,int a[])
{
    if(l<r)
    {
    int p=quick_partition(a,l,r);
    quick_sort(l,p-1,a);
    quick_sort(p+1,r,a);
    }

}
void merge_helper(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int l1[n1],r2[n2];
    for(int i=0;i<n1;i++)
    {
        l1[i]=a[l+i];
    }
    for(int i=0;i<n1;i++)
    {
        r2[i]=a[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(l1[i]<r2[j])
        {
            a[k++]=l1[i++];
        }
        else{
            a[k++]=r2[j++];
        }
    }
    while(i<n1)
    {
       a[k++]=l1[i++];
    }
    while(j<n2)
    {
        a[k++]=r2[j++];
    }
}
void merge_sort(int a[],int l,int r)
{
     if(l<r)
     {
      int m=(l+r)/2;
      merge_sort(a,l,m);
      merge_sort(a,m+1,r);
      merge_helper(a,l,m,r);
     }

}

int main()
{
    int arr[6]={5,1,4,3,2,3};
    int n=6;
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

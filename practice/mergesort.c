#include<iostream>
using namespace std;
void merge(int arr[],int lb,int mid,int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[ub+1];
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k] = arr[i];
            k++;
            i++;
        }
        else{
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    else{
        while(i<=mid){
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for(int i=lb;i<k;i++){
        arr[i] = b[i];
    }
}
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

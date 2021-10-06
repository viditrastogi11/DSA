#include<iostream>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int arr[10000];
	int mul=n*(n-1);
	int i=0;
	while(mul!=0)
    {
        int rem=mul%10;
        mul=mul/10;
        arr[i]=rem;
        i++;
    }
    n=n-2;
    while(n>1)
    {
        int j=0,carry=0;
        while(j!=i)
        {
            int mul=(arr[j]*n)+carry;
            arr[j]=mul%10;

            carry=mul/10;
            j++;
        }

        while(carry!=0)
        {
            int rem=carry%10;
            carry=carry/10;
            arr[i]=rem;
            i++;
        }
        n--;


    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}

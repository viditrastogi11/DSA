
#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main() {
	int n;
	long int sum=0;
	int arr[1000];
	cin >> n;										// Reading input from STDIN
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+(pow(2,i)*arr[i]);
	}
	cout<<endl<<sum;

}

#include<iostream>
#include<math.h>
using namespace std;
int find_lower_bound(long long int n,int k)
{

	long long int l=1,u=1000000000;
	 while(l<=u)
	 {

	 long long int x=(l+u)/2;

	 long long int ans=pow(x,k);
	 if(ans<0)
     {
         u=x-1;
     }

	 else if(ans==n)
	 {
		 return x;
	 }
	 else if(ans>n)
	 {
		 u=x-1;


	 }
	 else if(ans<n)
	 {
		 if(pow(x+1,k)>n)
		 {
			 return x;
		 }
		 else if(pow(x+1,k)==n)
		 {
			 return x+1;
		 }
		 l=x+1;

	 }
	 }
	 return l;
}
int main() {
	int t;
	cin>>t;
	while(t)
	{
	long long int n;
	int k;
	cin>>n;
	cin>>k;
	if(k==1)
    {
        cout<<n;
    }
    else
	  cout<<find_lower_bound(n,k)<<endl;
	t--;
	}

	return 0;

}

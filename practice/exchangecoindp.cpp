#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;

	long long int dp[100000];
	dp[0]=0;
	dp[1]=1;
	for(long long int i=2;i<=(n/2)+1;i++)
	{
		dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
	}
	cout<< dp[n/2]+dp[n/3]+dp[n/4];
	return 0;
}

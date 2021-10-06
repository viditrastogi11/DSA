#include <bits/stdc++.h>
using namespace std;

int largestprimeFactors(int n)
{
	int largest=n;
	while (n % 2 == 0)
	{
		largest=2;
		n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{

		while (n % i == 0)
		{
			largest=i;
			n = n/i;
		}
	}
	if (n > 2)
    {

    largest=n;

    }
    return largest;
}

int reduction(int n)
{

    vector<int>dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
	for(int i=3;i<=n;i++)
    {
        int largest=largestprimeFactors(i);
        if(largest==i)
        {
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=dp[largest]+1;
        }
    }
    return dp[n];
}
int reductioncount(int n,int counta,vector<int> dp)
{
    if(n==0)
    {
        return counta;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int largest=largestprimeFactors(n);
    if(largest==n)
    {
       return dp[n]=reductioncount(n-1,counta+1,dp);
    }
    else{
       return dp[n]=min(reductioncount(largest,counta+1,dp),reductioncount(n-1,counta+1,dp));
    }
}
int reductiona(int n)
{
    int counta=0;
	while(n)
    {
	int largest=largestprimeFactors(n);
	if(n==largest)
    {
        n=n-1;
    }
    else{
        n=largest;
    }
    counta++;
    }
    return counta;
}
int main()
{
	int n;
	cin>>n;
	vector<int>dp(n+1,-1);
	while(n)
    {
        int a=reduction(n);
        int b=reductiona(n);
        int c=reductioncount(n,0,dp);
    if(b!=c)
    {
cout<<n<<" ";
	cout<<b<<" "<<c<<endl;
    }
	n--;

    }
	return 0;
}



#include<iostream>
using namespace std;
int main() {
	int i=0,n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

	int wall=0;
	int sum=0;
	while(i<n)
	{
		if(wall==0)
		{
			if(a[i]!=0)
			{
				wall++;

			}
			else
			{

			    i++;
			continue;
			}
		}
		if(a[i]<=a[i+1])
			{
			    i++;

				continue;
			}
			int max=0;
			int index=-1;

		for(int j=i+1;j<n;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
				index=j;
				break;
			}
		}
		if(index!=-1)
		{

			if(a[i]<a[index])
			{cout<<index<<"index"<<i<<endl;
				int total=index-i-1;
				total=total*a[i];
				for(int j=i+1;j<index;j++)
				{
					total-=a[j];
				}
				cout<<total<<"tot"<<endl;
				sum+=total;
				i=index;

			}
			else
			{cout<<index<<" index "<<i<<endl;
				int total=index-i-1;
				total=total*a[index];
				for(int j=i+1;j<index;j++)
				{
					total-=a[j];
				}
				cout<<total<<"toa"<<endl;
				sum+=total;
					i=index;

			}
		}
		else{
            i++;
		}

	}
	cout<<sum;
	return 0;
}

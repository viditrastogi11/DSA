// CPP program to count the
// Number of subarrays with
// m odd numbers
#include <bits/stdc++.h>
using namespace std;

// function that returns
// the count of subarrays
// with m odd numbers
int countSubarrays(int a[], int n, int m)
{
	int count = 0;

	// traverse for all
	// possible subarrays
	for (int i = 0; i < n; i++)
	{
		int odd = 0;
		for (int j = i; j < n; j++)
		{
			if (a[j] % 2)
				odd++;

			// if count of odd numbers in
			// subarray is m
			if (odd <= m)
				count++;
		}
	}
	return count;
}

// Driver Code
int main()
{
	int a[] = {1,2,3,4           };
	int n = sizeof(a) / sizeof(a[0]);
	int m = 1;

	cout << countSubarrays(a, n, m);
	return 0;
}


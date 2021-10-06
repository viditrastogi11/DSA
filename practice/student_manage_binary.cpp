#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.second==p2.second)
	{
		return false;
	}
return p1.second>p2.second;
}
int main() {
	map<int,int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		m[a]++;
	}
	int k;
	cin>>k;
	vector<pair<int,int>> vp;
	for(auto x:m)
	{
		vp.push_back(x);
	}
	sort(vp.begin(),vp.end(),compare);
	int count=0;
	for(int i=0;i<k;i++)
	{
		cout<<vp[i].first<<" ";
	}
}

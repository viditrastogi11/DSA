
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> coins{1,2,3,4,5,6};
    rotate(coins.begin(),coins.begin()+2,coins.end());
    next_permutation(coins.begin(),coins.end());
    for(int x:coins)
    {
        cout<<x;
    }


}

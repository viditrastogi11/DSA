#include "bits/stdc++.h"
using namespace std;
int spf[100000];
void sieve(int MAXN)
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)

        spf[i] = i;

    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {

            for (int j=i*i; j<MAXN; j+=i)


                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
set<int> getFactorization(int x)
{
    set<int> ret;
    while (x != 1)
    {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
int main()
{
    int x = 100000;
    sieve(x+1);
    cout << "prime factorization for " << x << " : ";
    set <int> p = getFactorization(6);
    set <int> r = getFactorization(2);
     set <int> q = getFactorization(12);
    set<set<int>> s;
    s.insert(p);
    s.insert(q);
    s.insert(r);
    cout<<s.size();

    cout << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

     bool check(int i)
    {
        while(i)
        {
            if((i&1) && ((i>>1)&1))
            {
                return true;
            }
            i=i>>1;
        }
        return false;
    }
   int fibo(int n)
   {
        if(n==0)
       {
           return 1;
       }
        if(n==1)
        {
            return 2;
        }
        return fibo(n-1)+fibo(n-2);
   }
    int findIntegers(int n) {
        int i=n, count=0;
        if(n==1)
        {
            return 2;
        }
        while(i>>1)
        {
            count++;
            i=i>>1;
        }
        i=fibo(count);
        int maxi=pow(2,count+1);
        count=0;
        for(int j=maxi/2;(j<(maxi/2)+(maxi/4))&&j<=n;j++)
        {
            if(!check(j))
            {
              count++;
            }
        }
        return i+count;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<findIntegers(n);
    }

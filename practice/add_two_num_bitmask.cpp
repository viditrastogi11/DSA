#include<iostream>
using namespace std;
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        int i=0,j=0;
        int carry=0;
        string s="";
        while(i!=n||j!=m)
        {
            int k=0,l=0;
            if(i<n)
            {
                k=a[n-1-i]-'0';
                i++;
            }
            if(j<m)
            {
                l=b[m-1-j]-'0';
                j++;
            }

            int val=k^l;
val=val^carry;
             if(carry==0)
            {
                carry=l&k;
            }
            else{
                carry=l|k;
            }

            cout<<val<<endl;
        }

        return s;
    }
int Add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry now contains common
        //set bits of x and y
        int carry = x & y;

        // Sum of bits of x and y where at
        //least one of the bits is not set
        x = x ^ y;

        // Carry is shifted by one so that adding
        // it to x gives the required sum
        y = carry << 1;
    }
    return x;
}

int main()
{
    string s,p;
    cin>>s>>p;
    cout<<addBinary(s,p);
}

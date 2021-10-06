#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testcase;
    cin>>testcase;
    while(testcase>0)
    {
        string s;
        string t;
        cin>>s;
        cin>>t;
        int total=0;
        int prev=0;
        for(int i=0;i<t.length();i++)
        {
           int index= s.find(t[i]);
           int temp=index>=prev?index-prev:prev-index;
            total=total+temp;
            prev=index;
        }
         cout<<total;
        testcase--;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string s) {
        // code here
        int cons=0,vowel=0;
        for(int i=0;i<s.length();i++)
        {
      if(cons>3||vowel>5)
        {
            return 0;
        }
            if(s[i]=='?')
            {
                cons++;
                vowel++;
            }
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o')
            {
                vowel++;
                cons=0;
            }
            else{
                cons++;
                vowel=0;
            }
        }
        return 1;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;

        cin >> S;

        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0;
}

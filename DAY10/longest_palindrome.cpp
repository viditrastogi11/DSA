//https://leetcode.com/problems/longest-palindrome/submissions/
class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int len=0;
        int f=0;
        for(auto i:m)
        {

            if(i.second%2==0)
            {
                len=len+i.second;
            }
            else{
                f=1;
                len=len+i.second-1;
            }
        }
        if(f==1)
        {
            len++;
        }
        return len;
    }
};

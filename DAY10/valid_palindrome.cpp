// https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isvalid(char a)
    {
        if(isalpha(a))
        {
            return true;
        }
        if(isdigit(a))
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(isvalid(s[i])&&isvalid(s[j]))
            {
                if(s[i]!=s[j])
                {

                    if(tolower(s[i])!=tolower(s[j]))
                    {
                         return false;
                    }
                }
                i++;
                j--;
            }
            else{
                 if(!isvalid(s[i]))
            {
                i++;
            }
            if(!isvalid(s[j]))
            {
                j--;
            }
            }

        }
        return true;
    }
};

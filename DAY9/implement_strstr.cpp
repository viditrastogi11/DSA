class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
        {
            return 0;
        }
        int n=haystack.length();
        int m=needle.length();
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(haystack[i]==needle[l])
            {
                 l++;
                 if(l==m)
                {
                return i-l+1;
                 }
            }
            else{
                i=i-l;
                l=0;
            }

        }
        return -1;
    }
};

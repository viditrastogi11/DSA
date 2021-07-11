//https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution {
public:
    bool isvowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
             if(isvowel(s[i])&&isvowel(s[j]))
             {
                 swap(s[i],s[j]);
                 i++;
                 j--;
             }
            if(!isvowel(s[i]))
            {
                i++;
            }
            if(!isvowel(s[j]))
            {
                 j--;
            }

        }
        return s;
    }
};

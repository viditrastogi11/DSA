//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanValue(char s)
    {
        int cur=0;
         if(s=='I')
         {
             cur=1;
         }
         else if(s=='V')
         {
             cur=5;
         }
         else if(s=='X')
         {
             cur=10;
         }
         else if(s=='L')
         {
             cur=50;
         }
         else if(s=='C')
         {
          cur=100;
         }
         else if(s=='D')
         {
             cur=500;
         }
         else if(s=='M')
         {
            cur=1000;
         }
        return cur;
    }

    int romanToInt(string s) {
        int sum=0;
        int i=0;
     for( i=0;i<s.length()-1;i++)
     {
         if(romanValue(s[i])>=romanValue(s[i+1]))
         {
             sum=sum+romanValue(s[i]);
         }else{
             sum=sum-romanValue(s[i]);
         }
     }
       sum=sum+romanValue(s[i]);
        return sum;
    }
};

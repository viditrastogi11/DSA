//https://leetcode.com/problems/truncate-sentence/submissions/
class Solution {
public:
    string truncateSentence(string s, int k) {
        int l=0;

       while(l!=s.length())
       {
           if(s[l]==' ')
           {
               k--;
               if(k==0)
               {
                   break;
               }
           }
           l++;
       }
      return  s.substr(0,l);
    }
};

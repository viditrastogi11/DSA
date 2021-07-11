//https://leetcode.com/problems/excel-sheet-column-title/
class Solution {
public:
    string convertToTitle(int c) {
        string ans="";
        while(c)
        {
         int r=(c-1)%26;
            char a='A'+r;
            c=(c-1)/26;
        ans.insert(0,1,a);
        }
        return ans;
    }
};

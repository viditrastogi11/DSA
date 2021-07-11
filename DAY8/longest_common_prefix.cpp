//https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1)
        {
            return strs[0];
        }
        string prefix="";
        int j=0;

        while(j!=strs[0].length())
        {
         for(int i=0;i<n-1;i++)
        {

            if(!strs[i].empty()&&strs[i][j]!=strs[i+1][j])
            {
                return prefix;
            }
        }
        prefix.push_back(strs[0][j]);
            j++;
        }

        return prefix;
    }
};

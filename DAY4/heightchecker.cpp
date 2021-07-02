//https://leetcode.com/problems/height-checker/submissions/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sortv=heights;
        int count=0;
        sort(sortv.begin(),sortv.end());
        for(int i=0;i<sortv.size();i++)
        {
            if(heights[i]!=sortv[i])
            {
                count++;
            }
        }
        return count;
    }
};

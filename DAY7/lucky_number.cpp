//https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       vector<int> v;
        for(int i=0;i<n;i++)
        {
            int minr=INT_MAX;
            int minind=0;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<minr)
                {
                    minr=matrix[i][j];
                    minind=j;
                }
            }
            int maxc=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(maxc<matrix[i][minind])
                {
                    maxc=matrix[i][minind];
                }
            }
            if(maxc==minr)
            {
                v.push_back(maxc);
                return v;
            }

        }
        return v;
    }
 };

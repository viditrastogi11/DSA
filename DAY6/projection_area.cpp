//https://leetcode.com/problems/projection-area-of-3d-shapes/submissions/
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum=0;
        int zero=0;
        for(int j=0;j<n;j++)
        {
            int maxe=INT_MIN;
            sum=sum+*max_element(grid[j].begin(),grid[j].end());
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]==0)
                {
                    zero++;
                }
                maxe=max(grid[i][j],maxe);
            }
            sum=maxe+sum;
        }
        return sum+(n*n)-zero;
    }
};

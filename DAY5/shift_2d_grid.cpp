//https://leetcode.com/problems/island-perimeter/
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                v.push_back(grid[i][j]);
            }
        }
        k=k%(r*c);
        int last=(r*c)-1;
        while(k--)
        {
            int ele=v[last];
            v.pop_back();
            v.insert(v.begin(),ele);
        }
        int m=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                grid[i][j]=v[m];
                m++;
            }
        }
        return grid;
    }
};

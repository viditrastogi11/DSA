//https://leetcode.com/problems/reshape-the-matrix/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(r==n&&m==c||r*c!=n*m)
        {
            return mat;
        }
        vector<vector<int>>v(r,vector< int >(c));
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               v[x][y]=mat[i][j];
                y++;
                if(y==c)
                {
                    y=0; x++;
                }

            }

        }
        return v;
    }
};

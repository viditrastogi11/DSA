//https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=0;
        int r=mat.size();
        while(k<4)
        {
            if(mat!=target)
            {
    for(int i=0;i<r;i++)
    {
       reverse(mat[i].begin(),mat[i].end());
    }

    for(int i=0;i<r-1;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
                k++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

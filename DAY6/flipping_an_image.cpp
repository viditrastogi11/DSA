//https://leetcode.com/problems/flipping-an-image/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r=image.size();
        int c=image[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c/2;j++)
            {
                image[i][j]=1-image[i][j];
                image[i][c-1-j]=1-image[i][c-1-j];
                swap(image[i][j],image[i][c-1-j]);

            }
             if(c%2!=0)
                {
                     image[i][c/2]=1-image[i][c/2];
                }
        }
        return image;
    }
};

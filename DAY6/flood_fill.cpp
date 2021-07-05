//https://leetcode.com/problems/flood-fill/
class Solution {
public:
    void infect(vector<vector<int>>& image, int i, int j,int val, int newColor)
    {
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]==newColor)
        {
            return;
        }
        if(image[i][j]==val)
        {
            image[i][j]=newColor;
            if(i!=image.size())
            {
                 infect(image,i+1,j,val,newColor);
            }
           if(i!=0)
           {
                infect(image,i-1,j,val,newColor);
           }
           if(j!=image[0].size())
           {
             infect(image,i,j+1,val,newColor);
           }
            if(j!=0)
            {
                  infect(image,i,j-1,val,newColor);
            }
        }
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        infect(image,  sr,sc,image[sr][sc], newColor);
        return image;
    }
};

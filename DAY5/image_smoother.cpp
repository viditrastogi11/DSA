//https://leetcode.com/problems/image-smoother/submissions/
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
         vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
             int sum=img[i][j],count=1;
                if(i+1!=n)
                {
                 sum=sum+img[i+1][j];
                    count++;
                }
                if(j+1!=m)
                {
                    sum=sum+img[i][j+1];
                     count++;
                }if(i!=0)
                {
                    sum=sum+img[i-1][j];
                     count++;
                }
                if(j!=0)
                {
                    sum=sum+img[i][j-1];
                     count++;
                }
                if(i!=0&&j!=0)
                {
                    sum=sum+img[i-1][j-1];
                    count++;

                }
                if(i!=0&&j+1!=m)
                {
                    sum=sum+img[i-1][j+1];
                     count++;
                }
                if(i+1!=n&&j+1!=m)
                {
                    sum=sum+img[i+1][j+1];
                     count++;
                }
                if(i+1!=n&&j!=0)
                {
                    sum=sum+img[i+1][j-1];
                     count++;
                }
                ans[i][j]=sum/count;
            }

        }
        return ans;
    }
};

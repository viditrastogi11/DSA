//https://leetcode.com/problems/surface-area-of-3d-shapes/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& a) {
        int n=a.size();
        int side=0;
        int countzero=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    countzero++;
                }
                if(i==0)
                {
                    side+=a[i][j];
                }

                if(j==0)
                {
                 side+=a[i][j];
                }

                if(i==n-1)
                {
                    side+=a[i][j];
                }

                if(j==n-1)
                {
                    side+=a[i][j];
                }

                if(i+1!=n)
                {
                    if(a[i][j]>a[i+1][j])
                    {
                        side=side+a[i][j]-a[i+1][j];
                    }
                }
                if(j+1!=n)
                {
                    if(a[i][j]>a[i][j+1])
                    {
                        side=side+a[i][j]-a[i][j+1];
                    }
                }
                if(i!=0)
                {
                    if(a[i][j]>a[i-1][j])
                    {
                        side=side+a[i][j]-a[i-1][j];
                    }
                }
                if(j!=0)
                {
                    if(a[i][j]>a[i][j-1])
                    {
                        side=side+a[i][j]-a[i][j-1];
                    }
                }

            }
        }
        side=side+2*((n*n)-countzero);
        return side;
    }
};



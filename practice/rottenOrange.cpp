#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>>v;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    v.push({i,j});
                }
            }
        }
        int count =0;
        v.push({-1,-1});
        while(v.front()!=v.back())
        {

            if(v.front()[0]==-1)
            {
                count++;
                v.push({-1,-1});
                v.pop();
            }
            else{
                 int j=v.front()[0];
            int k=v.front()[1];
            if(j!=0)
            {
                if(grid[j-1][k]==1)
                {
                    grid[j-1][k]=2;
                    v.push({j-1,k});
                }
            }
            if(k!=0)
            {

                if( grid[j][k-1]==1)
                {
                   grid[j][k-1]=2;
                    v.push({j,k-1});
                }
            }
            if(j!=n-1)
            {
                if( grid[j+1][k]==1)
                {
                  grid[j+1][k]=2;
                    v.push({j+1,k});
                }
            }
            if(k!=n-1)
            {
                 if( grid[j][k+1]==1)
                {
                  grid[j][k+1]=2;
                    v.push({j,k+1});
                }
             }
            v.pop();
            }

        }
        return count;
    }
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}

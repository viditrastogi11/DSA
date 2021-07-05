//https://leetcode.com/problems/available-captures-for-rook/
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int x,y;
        for(int i=0;i<n;i++)
        {
            auto it=find(board[i].begin(),board[i].end(),'R');
            if(it!=board[i].end())
            {
                y=it-board[i].begin();
                x=i;
                break;
            }
        }
        int i=x;
        int j=y;
        int count=0;
        while(i!=n)
        {
            if(board[i][y]=='p')
            {
                count++;
                break;
            }
            if(board[i][y]=='B')
            {
                break;
            }
            i++;
        }
        while(j!=m)
        {
            if(board[x][j]=='p')
            {
                count++;
                break;
            }
            if(board[x][j]=='B')
            {
                break;
            }
            j++;

        }
        i=x;
        j=y;
         while(i>=0)
        {
            if(board[i][y]=='p')
            {
                count++;
                break;
            }
            if(board[i][y]=='B')
            {
                break;
            }
            i--;
        }
        while(j>=0)
        {
            if(board[x][j]=='p')
            {
                count++;
                break;
            }
            if(board[x][j]=='B')
            {
                break;
            }
            j--;

        }
        return count;
    }

};

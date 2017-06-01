class Solution {
public:
    bool check(vector<vector<char>>& board,int x,int y)
    {
        bool vis[3][10];
        memset(vis,0,sizeof(vis));
        for(int i = 0;i < 9;i++)
        {
            int xx = x / 3 * 3 + i / 3, yy = y / 3 * 3 + i % 3;
            if(board[x][i] != '.' && vis[0][board[x][i] - '0'])
                return false;
            else if(board[x][i] != '.')
                vis[0][board[x][i] - '0'] = 1;
            if(board[i][y] != '.' && vis[1][board[i][y] - '0'])
                return false;
            else if(board[i][y] != '.')
                vis[1][board[i][y] - '0'] = 1;
            if(board[xx][yy] != '.' && vis[2][board[xx][yy] - '0'])
                return false;
            else if(board[xx][yy] != '.')
                vis[2][board[xx][yy] - '0'] = 1;
        }
        return true;
    }
    bool solveSudoku(vector<vector<char>>& board) {
        for(int i = 0;i < 9;i++)
        {
            for(int j = 0;j < 9;j++)
            {
                if(board[i][j] == '.')
                {
                    for(int k = 1;k < 10;k++)
                    {
                        board[i][j] = (char)(k + '0');
                        if(check(board,i,j) && solveSudoku(board))
                            return true;
                        board[i][j] = '.';
                    }
                    return false;
                }
            }
        }
        return true;
    }
};
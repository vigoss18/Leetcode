class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool vis[3][9][10];
        memset(vis,0,sizeof(vis));
        for(int i = 0;i < 9;i++)
        {
            for(int j = 0;j < 9;j++)
            {
                if(board[i][j] != '.')
                {
                    int num = board[i][j] - '0';
                    if(vis[0][i][num])
                        return false;
                    vis[0][i][num] = 1;
                    if(vis[1][j][num])
                        return false;
                    vis[1][j][num] = 1;
                    if(vis[2][j / 3 * 3 + i / 3][num])
                        return false;
                    vis[2][j / 3 * 3 + i / 3][num] = 1;
                }
            }
        }
        return true;
    }
};
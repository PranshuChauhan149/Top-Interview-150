#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                int dirs[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
                                  {0, 1},   {1, -1}, {1, 0},  {1, 1}};
                int live = 0;

                for (int d = 0; d < 8; d++) {
                    int ni = i + dirs[d][0];
                    int nj = j + dirs[d][1];

                    if (ni >= 0 && nj >= 0 && ni < row && nj < col) {
                        if (board[ni][nj] == 1 || board[ni][nj] == -1)
                            live++;
                    }
                }

                if (board[i][j] == 1) {
                    if (live < 2 || live > 3)
                        board[i][j] = -1;
                } else {
                    if (live == 3)
                        board[i][j] = 2;
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == -1)
                    board[i][j] = 0;
                else if (board[i][j] == 2)
                    board[i][j] = 1;
            }
        }
    }
};
int main()
{
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:


    bool isSafe(int r,int c,vector<vector<char>>& board,char val){
       for (int i = 0; i < 9; i++) {
    if (i != c && board[r][i] == val)
        return false;  
    if (i != r && board[i][c] == val)
        return false;  
}

        int row = (r/3)*3;
        int col = (c/3)*3;

        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
                if((i != r || j != c) && board[i][j] == val) return false;
            }
        }

        return true;


    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.' && !isSafe(i, j, board, board[i][j])){
                    return false;
                }
        }
        }
        return true;
    }
};
int main(){

}
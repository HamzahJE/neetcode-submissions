#include <iostream>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);
        int n = board.size();
        for (int r=0; r<n; ++r){
            for (int c=0;c<n;++c){
                int box_index=((r/3)*3) + (c/3);
                if (board[r][c]=='.') continue;
                if (row[r].contains(board[r][c])) return false;
                if (col[c].contains(board[r][c])) return false;
                if (box[box_index].contains(board[r][c])) return false;
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                box[box_index].insert(board[r][c]);
            }
        }
            return true;

    }
};

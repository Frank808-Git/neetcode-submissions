class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Check if every array has unique
        //Check if every index is unique
        
        //Put every element in the row (array) in the set, if the set is the same length as the number count
        //

        map<int, set<char>> rows;
        map<int, set<char>> cols;
        map<int, set<char>> squs;
        
        for (int r = 0; r < 9; ++r)
        {
            for (int c = 0; c < 9; ++c)
            {
                if (rows[r].contains(board[r][c]) ||
                    cols[c].contains(board[r][c]) ||
                    squs[(r / 3) * 3 + (c / 3)].contains(board[r][c]))
                    return false;
                else if (isdigit(board[r][c]))
                {
                    rows[r].insert(board[r][c]);
                    cols[c].insert(board[r][c]);
                    squs[(r / 3) * 3 + (c / 3)].insert(board[r][c]);
                }
            }
        }
        return true;
    }
};

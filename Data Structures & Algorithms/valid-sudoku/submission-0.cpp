class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> cells(9);
        int m = board.size();
        int n = board[0].size();
        char value;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') continue;
                value = board[i][j];
                int box_index = (i / 3) * 3 + (j / 3);
                if (row[i].find(board[i][j]) != row[i].end() ||
                        col[j].find(board[i][j]) != col[j].end() ||
                        cells[box_index].find(board[i][j]) != cells[box_index].end())
                    return false;
                row[i].insert(value);
                col[j].insert(value);
                cells[box_index].insert(value);
            }
        }
        return true;
    }
};

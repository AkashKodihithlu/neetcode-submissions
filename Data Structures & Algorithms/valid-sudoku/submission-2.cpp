class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9];
        bool columns[9][9];
        bool boxes[9][9];
        char value;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                value=board[i][j];
                int digit=value-'1';
                int box_index=(i/3)*3+(j/3);
                if(rows[i][digit] || columns[j][digit] || boxes[box_index][digit])
                return false;
                rows[i][digit]=true;
                columns[j][digit]=true;
                boxes[box_index][digit]=true;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> rows[9];
        set<char> cols[9];
        set<char> boxes[9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char num = board[r][c];

                if (num == '.'){
                    continue;
                }

                int box = (r / 3) * 3 + (c / 3);

                if (rows[r].find(num) != rows[r].end())
                    return false;

                if (cols[c].find(num) != cols[c].end())
                    return false;

                if (boxes[box].find(num) != boxes[box].end())
                    return false;

                rows[r].insert(num);
                cols[c].insert(num);
                boxes[box].insert(num);
            }
        }
        return true;
    }
};
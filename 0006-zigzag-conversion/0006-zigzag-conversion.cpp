class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        vector<string> rows(numRows);
        int row = 0;
        int direction = 1;

        for (char ch : s) {
            rows[row] += ch;

            if (direction == 1) {
                row++;
                if (row == numRows) {
                    row = numRows - 2;
                    direction = -1;
                }
            }
            else {
                row--;
                if (row == -1) {
                    row = 1;
                    direction = 1;
                }
            }
        }
        string ans;
        for (string r : rows) {
            ans += r;
        }
        return ans;
    }
};
class Solution {
public:
    string convertToTitle(int columnNumber) {
        if (columnNumber == 0){
            return "";
        }

        columnNumber--;
        char ch = 'A' + (columnNumber % 26);
        return convertToTitle(columnNumber / 26) + ch;
    }
};
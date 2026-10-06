#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
class Solution {
private:
    const unordered_map<char, string> phoneMap = {
        {'2', "abc"}, {'3', "def"},  {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"},  {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };

    void backtrack(const string& digits, int index, string& currentPath, vector<string>& result) {
        if (index == digits.length()) {
            result.push_back(currentPath);
            return;
        }
        char currentDigit = digits[index];
        string letters = phoneMap.at(currentDigit);

        for (char letter : letters) {
            currentPath.push_back(letter);
            backtrack(digits, index + 1, currentPath, result);
            currentPath.pop_back();
        }
    }


public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result;
        }

        string currentPath = "";
        backtrack(digits, 0, currentPath, result);
        return result;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> s_freq;

        for (char c : s) {
            s_freq[c]++;
        }

        for (char c : t) {
            if (s_freq[c] == 0) {
                return c;
            }
            s_freq[c]--;
        }

        return -1;
    }
};
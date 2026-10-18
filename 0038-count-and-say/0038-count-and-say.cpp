class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        for (int term = 2; term <= n; term++) {
            string next = "";
            int i = 0;
            while (i < result.size()) {
                int j = i;
                while (j < result.size() &&
                       result[j] == result[i]) {
                    j++;
                }
                next += to_string(j - i);
                next += result[i];
                i = j;
            }
            result = next;
        }
        return result; 
    }
};
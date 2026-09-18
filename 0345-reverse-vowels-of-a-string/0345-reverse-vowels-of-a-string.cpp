class Solution {
public:
    string reverseVowels(string s) {

        int left = 0;
        int right = s.size() - 1;
        unordered_set<char> vowels = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
        };

        while (left < right) {

            if (!vowels.count(s[left])) {
                left++;
            }
            else if (!vowels.count(s[right])) {
                right--;
            }

            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};
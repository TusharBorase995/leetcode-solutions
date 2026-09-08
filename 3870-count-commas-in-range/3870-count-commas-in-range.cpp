class Solution {
public:
    int countCommas(int n) {
        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            int x = i;
            int digits = 0;

            while (x > 0) {
                digits++;
                x /= 10;
            }

            ans += (digits - 1) / 3;
        }

        return ans;
    }
};
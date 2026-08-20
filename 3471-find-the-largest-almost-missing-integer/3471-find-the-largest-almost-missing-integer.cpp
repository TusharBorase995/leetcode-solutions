class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for (int i = 0; i <= nums.size() - k; i++) {
            unordered_set<int> window;
            for (int j = i; j < i + k; j++) {
                window.insert(nums[j]);
            }
            for (int x : window) {
                count[x]++;
            }
        }
        int ans = -1;
        for (auto& [num, freq] : count) {
            if (freq == 1) {
                ans = max(ans, num);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minimumDeletions(vector<int>& nums){
        int n = nums.size();

        int minValue = INT_MAX;
        int maxValue = INT_MIN;
        int minPos = 0;
        int maxPos = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < minValue) {
                minValue = nums[i];
                minPos = i;
            }

            if (nums[i] > maxValue) {
                maxValue = nums[i];
                maxPos = i;
            }
        }

        int left = min(minPos, maxPos);
        int right = max(minPos, maxPos);

        int removeLeft = right + 1;
        int removeRight = n - left;
        int removeBoth = (left + 1) + (n - right);

        return min({removeLeft, removeRight, removeBoth});

    }
};
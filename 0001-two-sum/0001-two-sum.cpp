class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> seen;
        for (int i = 0; i < n; i++) {
            int ans = target - nums[i];
            if(seen.find(ans)!=seen.end()){
                return{seen[ans],i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
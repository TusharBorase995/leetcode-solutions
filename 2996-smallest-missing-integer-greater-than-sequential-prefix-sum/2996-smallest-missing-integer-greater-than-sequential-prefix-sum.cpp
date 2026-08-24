class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans=nums[0];
        unordered_map<int, bool> mp;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == (nums[i-1]+1)){
                ans = ans + nums[i];
            }
            else{
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = true;
        }

        while(mp.find(ans) != mp.end()) {
            ans = ans+1;
        }

        return ans;
    }
};
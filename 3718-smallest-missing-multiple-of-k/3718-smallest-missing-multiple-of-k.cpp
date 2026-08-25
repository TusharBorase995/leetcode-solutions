class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x = k;

        unordered_map<int, int> mp;
        for(int num : nums){
            mp[num] =1;
        }

        while(mp.find(x) != mp.end()) {
            x = x+k; 
        } 
        return x;
    }
};
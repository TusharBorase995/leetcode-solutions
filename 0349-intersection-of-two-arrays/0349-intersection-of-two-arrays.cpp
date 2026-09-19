class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x: nums1){
            mp[x]=1;
        }
        int m= nums2.size();

        for(int i=0;i<m;i++){
            if(mp.find(nums2[i])!=mp.end()){
                ans.push_back(nums2[i]);
                mp.erase(nums2[i]);
            }
        }
        return ans;
    }
};
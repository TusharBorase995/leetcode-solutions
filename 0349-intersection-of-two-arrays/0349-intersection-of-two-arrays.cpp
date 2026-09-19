class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x: nums1){
            mp[x]=1;
        }
        int n= nums1.size();
        int m= nums2.size();

        for(int i=0;i<m;i++){
            if(mp.find(nums2[i])!=mp.end()){
                if(mp[nums2[i]]!=2){
                    ans.push_back(nums2[i]);
                    mp[nums2[i]] =2;
                }
            }
        }
        return ans;
    }
};
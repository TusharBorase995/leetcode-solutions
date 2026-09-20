class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        for(char c:s){
            mp[c] = 'z' - c + 1;
        }
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                ans = ans + (mp[s[i]]*(i+1));
            }
        }
        return ans;
    }
};
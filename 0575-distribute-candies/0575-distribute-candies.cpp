class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> mp;
        int n=candyType.size();
        int cnt=0;
        for(int x :candyType){
            if(mp.find(x)==mp.end()){
                cnt++;
            }
            mp[x] = 1;
        }
        return min(cnt,n/2);
    }
};
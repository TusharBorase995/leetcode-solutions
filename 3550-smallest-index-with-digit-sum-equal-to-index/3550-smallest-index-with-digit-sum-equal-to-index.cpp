class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int digit;
        int n;
        int ans;
        vector<int> arr; 
        for(int i=0;i<nums.size();i++){
            ans =0;
            n = nums[i];
            while(n>0){
                digit = n % 10;
                ans = ans + digit; 
                n = n / 10;
            }
            if(ans == i){
                return i;
            }
        }
        return -1;
    }
};
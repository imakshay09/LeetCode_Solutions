class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0;i<=n;i++){
            int nums = __builtin_popcount(i);
            ans.push_back(nums);
        }
        return ans;
    }
};
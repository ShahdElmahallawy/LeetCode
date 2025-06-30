class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& i: nums)
        {
            mp[i]++;
        }
        int ans = -1;
        for(auto& x : mp)
        {
            if(mp[x.first] == 1)
                ans= max(ans, x.first);
        }
        return ans;
    }
};
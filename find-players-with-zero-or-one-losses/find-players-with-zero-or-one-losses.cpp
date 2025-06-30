class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> mp;
        for(auto& x: matches)
        {
            mp[x[0]]+=0;
            mp[x[1]]+=1;
        }
        vector<vector<int>> ans(2);
        for(auto& x: mp)
        {
            if(mp[x.first] == 0)
                ans[0].push_back(x.first);
            else if(mp[x.first] == 1)
                ans[1].push_back(x.first);
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};
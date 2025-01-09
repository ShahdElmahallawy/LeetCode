class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        int m = matches[0].size();
        map<int,int>mp; //num of losses
        for(int i=0; i<n; i++)
        {
            if(i == 0)
            {
                mp[matches[i][0]] = 0;
                mp[matches[i][1]] = 1;
                
            }
            else
            {
                mp[matches[i][0]] += 0;
                mp[matches[i][1]]++;
            }
        }
        vector<vector<int>>ans(2);
        for(auto& i: mp)
        {
            if(i.second == 0)
                ans[0].push_back(i.first);
            else if(i.second == 1)
                ans[1].push_back(i.first);
        }
        return ans;
    }
};
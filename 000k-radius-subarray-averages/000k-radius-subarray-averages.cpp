class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>pref(n+1);
        pref[0] = 0;
        for(int i=1; i<n+1; i++)
        {
            pref[i] = pref[i-1] + nums[i-1];
        }
        vector<int>ans(n, -1);
        if(k == 0)
        {
            return nums;
        }
        for(int i=k; i<n-k; i++)
        {
            ans[i] = (pref[i+k+1] - pref [i-k]) / (2*k + 1);
        }
        return ans;
    }
};
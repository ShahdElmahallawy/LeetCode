class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int ans;
        for(int i=0; i< nums.size()+1; i++)
        {
            if(s.find(i) == s.end())
                return i;
        }
        return -1;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n* (n+1) / 2;
        for(auto& num: nums)
        {
            total-=num;
        }
        return total;
    }
};
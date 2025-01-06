class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = nums[0];
        int minm = nums[0];
        for (int i =1; i<nums.size(); i++)
        {
            sum += nums[i];
            minm = min(minm, sum);
        }
        if(minm >= 1)
            return 1;
        else 
            return (1 - minm);
    }
};
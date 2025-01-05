class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int   r=0;
        int l =0;
        int cur = 0;
        int sum = 0;
        for(int i=0; i<k; i++)
        {
            sum += nums[i];
        }
        int ans = sum;
        for(int i=k; i<nums.size(); i++)
        {
            sum += nums[i] - nums [i-k];
            ans = max(ans, sum);
        }
        return (double)ans/k;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        int l =0;
        int r = n -1;
        for(int i =n-1; i >= 0; i--)
        {
            int sqr_l = nums[l] * nums[l];
            int sqr_r = nums[r] * nums [r];
            if(sqr_l > sqr_r)
            {
                ans[i] = sqr_l;
                l++;
            }
            else
            {
                ans[i] = sqr_r;
                r--;
            }
        }
        return ans;
    }
};
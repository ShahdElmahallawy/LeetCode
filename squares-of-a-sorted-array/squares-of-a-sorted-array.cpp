class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        
        vector<int>res(n);
        for(int i= n -1; i>= 0; i--)
        {
            int square;
            if(abs(nums[l]) < abs(nums[r]))
            {
                square = nums[r] * nums[r];
                r--;
            }
            else
            {
                square = nums[l] * nums[l];
                l++;
            }
            res[i] = square;
        }
        return res;
    }
};

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // if(nums.size() == 1)
        //     return 1;
        int r =0; int l =0; int cur =0;
        int ans = 0;
        for (int r =0; r<nums.size(); r++)
        {
            if(nums[r] == 0)
            {
                cur+=1;
            }
            while(cur > k)
            {
                if(nums[l] == 0)
                    cur -= 1;
                l++;
            }
            
            ans = max(ans, r - l +1);
        }
        return ans;
    }
};
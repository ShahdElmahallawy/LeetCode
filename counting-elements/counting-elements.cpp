class Solution {
public:
    int countElements(vector<int>& arr) {
        set<int>s(arr.begin(), arr.end());
        int cnt=0;
        for(auto &num: arr)
        {
            if(s.find(num+1) != s.end())
                cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l =0;
        int n = s.size();
        int r = n-1;
        while(l<r)
        {
            char x = s[r];
            s[r] = s[l];
            s[l] = x;
            l++;
            r--;
        }
        for(auto& x: s)
            cout<< x;
    }
};
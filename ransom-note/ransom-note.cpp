class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rans;
        unordered_map<char, int> magaz;
        for(auto& r: ransomNote)
        {
            rans[r]++;
        }
        for(auto& m: magazine)
        {
            magaz[m]++;
        }
        if(rans.size() > magaz.size())
            return false;
        
        for(auto& r: rans)
        {
            if(magaz.find(r.first) == magaz.end())
                return false;
            if(magaz[r.first] < r.second)
                return false;
        }
        return true;
    }
};
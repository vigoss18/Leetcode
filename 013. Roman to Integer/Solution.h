class Solution {
public:
    int romanToInt(string s) {
        vector<int>p;
        map<char,int>mp;
        mp['I'] = 1,mp['V'] = 5,mp['X'] = 10;
        mp['L'] = 50,mp['C'] = 100,mp['D'] = 500,mp['M'] = 1000;
        for(int i = 0;i < s.size();i++)
        {
            p.push_back(mp[s[i]]);
        }
        int ret = 0;
        for(int i = 0;i < p.size();i++)
        {
            if(i + 1 != p.size())
            {
                if(p[i] < p[i + 1])
                    ret -= p[i];
                else
                    ret += p[i];
            }
            else
                ret += p[i];
        }
        return ret;
    }
};
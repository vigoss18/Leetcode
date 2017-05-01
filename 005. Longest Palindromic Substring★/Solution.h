class Solution {
public:
    string longestPalindrome(string s) {
        string ss = "#";
        for (int i = 0; i < s.size(); i++)
            ss += s[i], ss += "#";
        s = ss;
        int RL[2555];
        int maxRight = 0, pos = 0, maxL = 0, flag;
        string ret;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < maxRight)
            {
                RL[i] = min(RL[2 * pos - i], maxRight - i);
            }
            else
            {
                RL[i] = 1;
            }
            while (i - RL[i] >= 0 && i + RL[i] < s.size() && s[i - RL[i]] == s[i + RL[i]])
                RL[i]++;
            if (i + RL[i] - 1 > maxRight)
            {
                maxRight = RL[i] + i - 1;
                pos = i;
            }
            if (maxL < RL[i] - 1)
            {
                maxL = RL[i] - 1;
                flag = i;
            }
        }
        ret = s.substr(flag - RL[flag] + 1, RL[flag] * 2 - 1);
        string now = "";
        for (int i = 0; i < ret.size(); i++)
        {
            if (ret[i] != '#')
                now += ret[i];
        }
        return now;
    }
};
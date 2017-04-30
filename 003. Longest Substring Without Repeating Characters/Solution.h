class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
            return 0;
        int vis[266] = {0};
        int maxn = 1,now = 1;
        vis[s[0]] = 1;
        for(int st = 0,ed = 1;ed < s.size();ed++)
        {
            if(vis[s[ed]])
            {
                while(s[st++] != s[ed])
                    vis[s[st - 1]] = 0,now--;
                
            }
            else
            {
                vis[s[ed]] = 1;
                now++;
            }
            maxn = max(maxn,now);
        }
        return maxn;
    }
};
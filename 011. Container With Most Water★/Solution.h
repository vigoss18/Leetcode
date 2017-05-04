class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0,ed = height.size() - 1;
        int maxn = min(height[st],height[ed]) * (ed - st);
        while(st < ed)
        {
            if(height[st] > height[ed])
            {
                ed--;
            }
            else
            {
                st++;
            }
            maxn = max(maxn,min(height[st],height[ed]) * (ed - st));
        }
        return maxn;
    }
};
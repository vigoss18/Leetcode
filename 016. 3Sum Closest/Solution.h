class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ret,sv = 99999999;
        sort(nums.begin(),nums.end());
        int now;
        for(int i = 0;i < nums.size() - 2;i++)
        {
            int l = i + 1,r = nums.size() - 1;
            while(l < r)
            {
                now = nums[i] + nums[l] + nums[r];
                if(abs(now - target) < sv)
                {
                    sv = abs(now - target);
                    ret = now;
                }
                if(now > target)
                {
                    r--;
                }
                else if(now < target)
                {
                    l++;
                }
                else
                {
                    return target;
                }
            }
        }
        return ret;
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() < 2)
            return;
        int flag = 0;
        for(int i = nums.size() - 2;i >= 0;i--)
        {
            bool now = false;
            int minn = 99999999,pos = -1;
            for(int j = i + 1;j < nums.size();j++)
            {
                if(nums[j] > nums[i])
                {
                    if(minn > nums[j])
                    {
                        minn = nums[j];
                        pos = j;
                        now = 1;
                    }
                }
            }
            if(now)
            {
                swap(nums[i],nums[pos]);
                sort(nums.begin() + i + 1,nums.end());
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            sort(nums.begin(),nums.end());
        }
    }
};
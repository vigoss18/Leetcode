class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ret;
        if(nums.size() < 4)
            return ret;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size() - 3;i++)
        {
            while(i > 0 && nums[i] == nums[i - 1]) i++;
            for(int j = i + 1;j < nums.size() - 2;j++)
            {
                while(j > i + 1 && nums[j] == nums[j - 1]) j++;
                int l = j + 1,r = nums.size() - 1;
                int num = target - nums[i] - nums[j];
                while(l < r)
                {
                    if(nums[l] + nums[r] == num)
                    {
                        ret.push_back(vector<int>({nums[i],nums[j],nums[l],nums[r]}));
                        while(nums[l] == nums[l + 1]) l++;
                        while(nums[r] == nums[r - 1]) r--;
                        l++;
                    }
                    else if(nums[l] + nums[r] > num)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        return ret;
    }
};
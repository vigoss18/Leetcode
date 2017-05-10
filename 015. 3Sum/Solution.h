class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(numsbegin(),nums.end());
        for(int i = 0;i < nums.size();i++)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                int num = -nums[i] - nums[j];
                if(num < nums[j])
                    continue;
                int l = j + 1,r = nums.size() - 1,mid;
                while(l < r)
                {
                    mid = (l + r) / 2;
                    if(nums[i] > nums[mid])
                        r = mid;
                    else
                        l = mid + 1;
                }
                if(num == nums[(l + r) / 2])
                {
                    
                }
            }
        }
    }
};
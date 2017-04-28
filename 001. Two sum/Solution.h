class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ret;
        for(int i = 0;i < nums.size();i++)
        {
            mp[nums[i]] = i;
        }
        for(int i = 0;i < nums.size();i++)
        {
            if(mp[target - nums[i]] != 0)
            {
                ret.push_back(i);
                ret.push_back(mp[target - nums[i]]);
                return ret;
            }
        }
    }
};
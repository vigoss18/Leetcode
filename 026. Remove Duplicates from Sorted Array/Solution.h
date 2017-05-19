class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0;
        for(int i = 0;i < nums.size();i++)
        {
            if(i == 0)
                ret++;
            else if(nums[i] != nums[i - 1])
                ret++;
            else
                nums.erase(nums.begin() + i),i--;
        }
        return ret;
    }
};
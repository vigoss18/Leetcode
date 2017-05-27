class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return -1;
        int num = nums[0];
        int l = 0,r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l])
            {
                if(nums[l] <= target && nums[mid] >= target)
                    r = mid - 1;
                else
                    l = mid + 1;
                
            }
            else
            {
                if(target <= nums[mid] || target >= nums[l])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
};
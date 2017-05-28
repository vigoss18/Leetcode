class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ret;
        ret.push_back(-1);
        ret.push_back(-1);
        int l = 0,r = nums.size() - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(nums[mid] > target)
            {
                r = mid- 1;
            }
            else if(nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                int l1 = mid,r1 = mid;
                while(l1 >= 0 && nums[l1] == target)
                    l1--;
                while(r1 < nums.size() && nums[r1] == target)
                    r1++;
                ret[0] = l1 + 1,ret[1] = r1 - 1;
                break;
            }
        }
        return ret;
    }
    
};
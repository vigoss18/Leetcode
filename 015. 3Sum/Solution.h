class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<vector<int>,int>vis;
        vector<vector<int>>ret;
        vector<int>tmp;
        for(int i = 0;i < nums.size();i++)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                int num = -nums[i] - nums[j];
                if(num < nums[j])
                    continue;
                int l = j + 1,r = nums.size() - 1,mid;
                while(l <= r)
                {
                    mid = (l + r) / 2;
                    if(num < nums[mid])
                        r = mid - 1;
                    else
                        l = mid + 1;
                }
                if((l + r) / 2 == j)
                    continue;
                if(num == nums[(l + r) / 2])
                {
                    tmp.clear();
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[(l + r) / 2]);
                    if(!vis[tmp])
                    {
                        ret.push_back(tmp);
                        vis[tmp] = 1;
                    }
                    
                }
            }
        }
        //sort(ret.begin(),ret.end());
        //ret.erase(unique(ret.begin(),ret.end()),ret.end());
        return ret;
    }
};
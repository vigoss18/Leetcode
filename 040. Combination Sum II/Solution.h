class Solution {
public:
    map<vector<int>,int>mp;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ret;
        vector<int>us;
        dfs(ret,us,candidates,target,0);
        return ret;
    }
    void dfs(vector<vector<int>>& ret,vector<int> us,vector<int>& can,int target,int st)
    {
        if(target == 0 && !mp[us])
        {
            ret.push_back(us);
            mp[us] = 1;
            return;
        }
        for(int i = st;i < can.size();i++)
        {
            if(can[i] > target)
                break;
            us.push_back(can[i]);
            dfs(ret,us,can,target - can[i],i + 1);
            us.pop_back();
        }
    }
};
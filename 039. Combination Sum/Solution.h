class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ret;
        vector<int>us;
        dfs(ret,us,candidates,target,0);
        return ret;
    }
    void dfs(vector<vector<int>>& ret,vector<int> us,vector<int>& can,int target,int st)
    {
        if(target == 0)
        {
            ret.push_back(us);
            return;
        }
        for(int i = st;i < can.size();i++)
        {
            if(can[i] > target)
                break;
            us.push_back(can[i]);
            dfs(ret,us,can,target - can[i],i);
            us.pop_back();
        }
    }
};
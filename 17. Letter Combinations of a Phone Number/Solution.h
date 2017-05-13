class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n == 0)
            return vector<string>();
        vector<string>ret;
        dfs(ret,"",n,n);
        return ret;
    }
private:
    void dfs(vector<string> &v,string now,int l,int r)
    {
        if(l == 0 && r == 0)
            v.push_back(now);
        else 
        {
            if(l > 0)
                dfs(v,now + "(",l - 1,r);
            if(l < r)
                dfs(v,now + ")",l,r - 1);
        }
    }
};
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '(')
                st.push(i);
            else if(!st.empty())
            {
                s[st.top()] = '.';
                s[i] = '.';
                st.pop();
            }
        }
        int tmp = 0,maxn = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '.')
                tmp++;
            else
                maxn = max(maxn,tmp),tmp = 0;
        }
        return max(maxn,tmp);
    }
};
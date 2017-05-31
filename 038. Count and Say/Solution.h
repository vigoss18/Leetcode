class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        else if(n == 2)
            return "11";
        string s = "1.";
        while(--n)
        {
            string tmp = "";
            
            int cnt = 1;
            for(int i = 1;i < s.size();i++)
            {
                if(s[i] != s[i - 1])
                {
                    stringstream  ss;
                    ss << cnt;
                    string p;
                    ss >> p;
                    tmp += p + s[i - 1],cnt = 1;
                }
                else
                    cnt++;
            }
            s = tmp + ".";
        }
        return s.substr(0,s.size() - 1);
    }
};
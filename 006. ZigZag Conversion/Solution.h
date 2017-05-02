class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        string r[1111];
        bool flag = 1;
        for(int i = 0,pos = 1;i < s.size();i++)
        {
            r[pos] += s[i];
            if(flag)
                pos++;
            else
                pos--;
            if(pos == 0)
                flag ^= 1,pos += 2;
            else if(pos == numRows + 1)
                flag ^= 1,pos -= 2;
        }
        string ret;
        for(int i = 1;i <= numRows;i++)
        {
            ret += r[i];
        }
        return ret;
    }
};
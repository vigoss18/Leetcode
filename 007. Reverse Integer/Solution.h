class Solution {
public:
    int reverse(int x) {
        long long y = 0;
        bool flag = (x >= 0);
        x = abs(x);
        while(x != 0)
        {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        if(abs(y) > pow(2.0,31) - 1)
            y = 0;
        if(!flag)
            return -y;
        return y;
    }
};
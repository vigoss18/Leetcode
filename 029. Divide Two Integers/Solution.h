class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == -(1 << 31) && divisor == -1)
            return (1 << 31) - 1;
        bool sig = true;
        if(dividend > 0 ^ divisor > 0)
            sig = false;
        long long t1 = abs((long long)dividend),t2 = abs((long long)divisor);
        long long ret = 0;
        while(t1 > 0)
        {
            int i = 1;
            while(t1 >= (t2 << i))
            {
                i++;
            }
            if(t1 >= (t2 << (i - 1)))
                ret += (1 << (i - 1));
            t1 -= (t2 << (i - 1));
        }
        if(!sig)
            return -ret;
        return ret;
    }
};
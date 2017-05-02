int myAtoi(char* str) {
    long long ret = 0;
    bool flag = 1;
    int cnt = 0;
    while(*str == ' ')
        str++;
    while(*str == '0')
        str++;
    while(*str != '\0' && ret < 2147483649)
    {
        if(*str == '+')
        {
            cnt++;
            if(cnt > 1) break;
            str++;
        }
        else if(*str == '-')
        {
            cnt++;
            if(cnt > 1 ) break;
            str++;flag = 0;
        }
        if(*str > '9' || *str < '0')
            break;
        ret *= 10;
        ret += (*str - '0');
        str++;
    }
    if(!flag) ret = -ret;
    if(ret > 2147483647) return 2147483647;
    else if(ret < -2147483648) return -2147483648;
    return ret;
}
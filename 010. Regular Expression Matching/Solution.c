bool isMatch(const char* s,const char* p) {
    if(*s == '\0' && (*p == '\0' || (*(p + 1) == '*' && isMatch(s,p + 2))))
        return  true;
    else if(*s == '\0' || *p == '\0')
        return false;
    if(*(p + 1) == '*')
    {
        if(*s != *p && *p != '.')
            return isMatch(s,p + 2);
        else
        {
            if(isMatch(s,p + 2))
                return true;
            int i = 0;
            while((*p == '.' || *(s + i) == *p))
            {
                if(isMatch(s + i + 1,p + 2))
                    return true;
                if((s + i + 1) == '\0')
                    break;
                i++;
            }
            return false;
        }
    }
    else
    {
        if(*s == *p || *p == '.')
            return isMatch(s + 1,p + 1);
        else
            return false;
    }
}
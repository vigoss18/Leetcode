bool isPalindrome(int x) {
    if(x < 0 || (x > 0 && x % 10 == 0)) return false;
    int sum = 0;
    while(sum < x)
    {
        sum *= 10;
        sum += x % 10;
        x /= 10;
    }
    if(x == sum || x == sum / 10)
        return true;
    return false;
}
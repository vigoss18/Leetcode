class Solution {
public:
    string intToRoman(int num) {
        string s[][11] = {{"", "M", "MM","MMM"},
                        {"", "C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                        {"", "X", "XX","XXX","XL","L","LX","LXX","LXXX","XC"},   
                        {"", "I","II","III","IV","V","VI","VII","VIII","IX"}};  
        string ret = "";
        int pos = 0;
        while(num)
        {
            ret = s[3 - pos][num % 10] + ret;
            num /= 10;
            pos++;
        }
        return ret;
    }

};
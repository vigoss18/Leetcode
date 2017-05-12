class Solution {  
public:  
    vector<string> letterCombinations(string digits) {  
        vector<string> ans;  
        if (digits.size() > 0){  
            vector<string> tmp = letterCombinations(digits.substr(1, digits.size() - 1));  
            if (tmp.size() == 0){  
                tmp.push_back("");  
            }  
            for (int i = 0; i < index[digits[0] - '0'].length(); ++i){  
                for (int j = 0; j < tmp.size(); ++j){  
                    ans.push_back(index[digits[0] - '0'][i] + tmp[j]);  
                }  
            }  
        }  
        return ans;  
    }  
    vector<string> index = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};//列表初始化  
};  
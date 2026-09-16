class Solution {
public:
    void helper(string digits, string temp, int index, vector<string>& ans,
                string mapping[]) {
        if (index >= digits.size()) {
            ans.push_back(temp);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.size(); i++) {
            temp.push_back(value[i]);
            helper(digits, temp, index + 1, ans, mapping);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        string temp;
        vector<string> ans;
        int index = 0;
        string mapping[10] = {"",    "", "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(digits, temp, index,ans, mapping);
        return ans;
    }
};
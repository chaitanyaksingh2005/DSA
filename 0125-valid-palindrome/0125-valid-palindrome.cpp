class Solution {
public:
    bool helper(const string &s, int start, int end) {
        if (start >= end) {
            return true;
        }
        if (!isalnum(s[start])) {
            return helper(s, start + 1, end);
        }
        if (!isalnum(s[end])) {
            return helper(s, start, end - 1);
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        return helper(s, start + 1, end - 1);
    }

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        return helper(s, start, end);
    }
};

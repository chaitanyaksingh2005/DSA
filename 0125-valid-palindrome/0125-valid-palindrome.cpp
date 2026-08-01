
class Solution {
public:
    bool valid(const string& s, int i, int j) {
        if (i >= j) {
            return true;
        }
        
        if (!isalnum(s[i])) {
            return valid(s, i + 1, j);
        }
        if (!isalnum(s[j])) {
            return valid(s, i, j - 1);

        }
        if (tolower( s[i]) != tolower (s[j])) {
            return false;
        }
        return valid(s,i+1,j-1);
    }

    bool isPalindrome(string s)
     {
     return valid(s, 0, s.size() - 1);
       }
};
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0; // Word ki starting position

        for (int j = 0; j <= n; j++) {
            // Jab space mil jaye ya string ka end ho jaye
            if (j == n || s[j] == ' ') {
                // Current word (i se j-1) ko reverse karo
                int left = i, right = j - 1;
                while (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                // Next word ke start ke liye i ko update karo
                i = j + 1;
            }
        }
        
        return s;
    }
};

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void solve(int n, int k, vector<int>& temp, int start) {
        if (k == 0) {
            ans.push_back(temp);
            return;
        }

        if (start > n || (n - start + 1) < k) {
            return;
        }
        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            solve(n, k - 1, temp, i + 1);
            temp.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int> temp;
        solve(n, k, temp, 1);
        return ans;
    }
};

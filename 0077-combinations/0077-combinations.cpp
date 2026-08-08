
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

        temp.push_back(start);
        solve(n, k - 1, temp, start + 1);
        temp.pop_back(); // Backtrack

        solve(n, k, temp, start + 1);
    }

    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int> temp;
        solve(n, k, temp, 1);
        return ans;
    }
};

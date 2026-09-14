class Solution {
public:
    vector<vector<int>> ans;
    void helper(int i, int n, int k, vector<int>& temp)

    {

        if (k == 0) {
            ans.push_back(temp);
            return;
        }

        if (k > 0) {

            for (int j = i; j <= n; j++) {
                temp.push_back(j);
                helper(j + 1, n, k - 1, temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        int i = 1;
        helper(1, n, k, temp);
        return ans;
    }
};
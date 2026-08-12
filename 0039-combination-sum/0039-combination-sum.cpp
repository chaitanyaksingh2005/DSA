class Solution {
public:
    void helper(int i, int target, vector<int>& candidates,
                vector<vector<int>>&ans, vector<int>& ds)

    {
        if (i == candidates.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }

            return;
        }
        if (candidates[i] <= target) {
            ds.push_back(candidates[i]);
            helper(i, target - candidates[i], candidates, ans, ds);
            ds.pop_back();
        }
        helper(i + 1, target, candidates, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i = 0;
        vector<int> ds;
        vector<vector<int>> ans;
        helper(i, target, candidates, ans, ds);
        return ans;
    }
};
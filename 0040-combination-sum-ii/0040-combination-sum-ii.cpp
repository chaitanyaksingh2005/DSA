 class Solution {
public:
    void helper(int i, int target, vector<int>& temp, vector<vector<int>>& ans,
                vector<int>& candidates) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (target < 0) {
            return;
        }

        for (int j = i; j < candidates.size(); j++) {

            if (j > i && candidates[j] == candidates[j - 1]) {
                continue;
            }

            if (candidates[j] > target) {
                break;
            }

            temp.push_back(candidates[j]);

            helper(j + 1, target - candidates[j], temp, ans, candidates);

            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        helper(0, target, temp, ans, candidates);

        return ans;
    }
};

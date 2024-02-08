class Solution {
public:
    void combinationSum_helper(vector<int>& candidates, int target,
                               set<vector<int>>& ans, vector<int>& v,
                               int index) {

        // base
        if (target == 0) {
            // sort(v.begin(),v.end());

            ans.insert(v);
            return;
        } else if (target < 0) {
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if(i>index && candidates[i]==candidates[i-1])
            continue;
            v.push_back(candidates[i]);
            combinationSum_helper(candidates, target - candidates[i], ans, v,
                                  i + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> ans;
        vector<int> v;
        vector<vector<int>> ans1;

        combinationSum_helper(candidates, target, ans, v, 0);

        for (auto i : ans) {
            ans1.push_back(i);
        }
        return ans1;
    }
};
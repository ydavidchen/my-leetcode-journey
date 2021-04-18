class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size() == 0) return {{}};

        // Sort required: O(nlgn)
        sort(candidates.begin(), candidates.end());

        vector<int> tmp;
        vector<vector<int>> res;
        findCandidateRecursive(candidates, target, res, tmp, 0);

        return res;
    }

    void findCandidateRecursive(vector<int>& candidates, int target,
                                vector<vector<int>>& res, vector<int>& tmp, int i) {

        if(target < 0) return; //early return

        if(target == 0) { //earlier return after update res once
            res.push_back(tmp);
            return;
        }

        // General case:
        while(i < candidates.size() && target-candidates[i] >= 0) {
            tmp.push_back(candidates[i]);

            findCandidateRecursive(candidates, target-candidates[i], res, tmp, i);

            i++;

            tmp.pop_back();
        }
    }
};

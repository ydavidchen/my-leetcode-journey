class Solution {
public:
    int rob(vector<int>& nums) {
        // Early return: Edge Cases
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        
        // Final case
        vector<int> p(nums.begin(), nums.end()-1);
        vector<int> q(nums.begin()+1, nums.end());
        return max(houseRobberI(p), houseRobberI(q));
    }
    
    int houseRobberI(vector<int>& nums) {
        int res[nums.size()+1];
        res[0] = nums[0];
        res[1] = max(nums[0], nums[1]);
        for(int k=2; k < nums.size(); k++) res[k] = max(nums[k]+res[k-2], res[k-1]);
        return res[nums.size()-1];
    }
};

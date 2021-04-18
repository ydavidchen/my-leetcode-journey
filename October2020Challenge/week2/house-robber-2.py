class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums);
        if (n == 0): return 0;
        if (n == 1): return nums[0];
        if (n == 2): return max(nums[0], nums[1]);
        
        p = nums[0:(n-1)];
        q = nums[1:n];
        return max(self.houseRobberI(p), self.houseRobberI(q));

    def houseRobberI(self, nums):
        res = nums;
        n = len(res);
        # res[0] = nums[0];
        res[1] = max(nums[0], nums[1]);
        for k in range(2,n):
            res[k] = max(nums[k]+res[k-2], res[k-1]);
        return res[-1];

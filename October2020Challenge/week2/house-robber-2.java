class Solution {
    public int rob(int[] nums) {
        // Early return: Edge Cases
        if(nums.length == 0) return 0;
        if(nums.length == 1) return nums[0];
        if(nums.length == 2) return Math.max(nums[0], nums[1]);
        
        // Final case
        int[] p = Arrays.copyOfRange(nums, 0, nums.length-1);
        int[] q = Arrays.copyOfRange(nums, 1, nums.length);
        return Math.max(houseRobberI(p), houseRobberI(q));
    }

    int houseRobberI(int[] nums) {
        int[] res = new int[nums.length+1];
        res[0] = nums[0];
        res[1] = Math.max(nums[0], nums[1]);
        for(int k=2; k < nums.length; k++) {
            res[k] = Math.max(nums[k]+res[k-2], res[k-1]);
        }
        return res[nums.length-1];
    }
}

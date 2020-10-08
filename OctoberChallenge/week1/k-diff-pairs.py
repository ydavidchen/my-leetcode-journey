class Solution(object):
    def findPairs(self, nums, k):
        """
        O(n) time implementation
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count = 0;
        nums.sort();

        j = 0;
        tmp = nums[-1];
        for i in range(len(nums)):
            while (nums[i]-nums[j] > k) and j < i:
                j += 1;

            if (nums[i]-nums[j] == k) and tmp != nums[j] and j != i:
                count += 1;
                nums[j] = tmp;

        return count;

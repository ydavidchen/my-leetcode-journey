"""
Given an integer array nums of 2n integers, 
group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) 
such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.

Example 1:
    Input: nums = [1,4,3,2]
    Output: 4
"""

class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        res = 0
        for i in range(0, len(nums), 2):
            res += nums[i]
            
        return res
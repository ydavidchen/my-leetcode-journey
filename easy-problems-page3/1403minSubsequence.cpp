/*
Given the array nums, obtain a subsequence of the array whose sum of elements 
is strictly greater than the sum of the non included elements in such subsequence. 

If there are multiple solutions, return the subsequence with 
minimum size and if there still exist multiple solutions, return the subsequence with the maximum total sum of all its elements. A subsequence of an array can be obtained by erasing some (possibly zero) elements from the array. 

Note that the solution with the given constraints is guaranteed to be unique. 
Also return the answer sorted in non-increasing order.

Example 1:
Input: nums = [4,3,10,9,8]
Output: [10,9] 
*/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        
        int sRes=0, sNum=0;
        while(accumulate(res.begin(), res.end(), sRes) <= accumulate(nums.begin(), nums.end(), sNum)) {
            res.push_back(nums.back());
            nums.pop_back();
        }
        return res;
    }
};
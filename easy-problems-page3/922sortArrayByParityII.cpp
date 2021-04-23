/* 
Given an array of integers nums, half of the integers in nums are odd, 
and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, 
and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.

Example 1:
Input: nums = [4,2,5,7]
Output: [4,5,2,7]
*/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        // 2-pass approach
        
        int n = nums.size();
        vector<int> res(n);   
        int k;
            
        // Even k, v
        k=0;
        for(int & num : nums) {
            if(num % 2 == 0) {
                res[k] = num;
                k += 2;
            }
        }
        
        // Odd k, v
        k=1;
        for(int & num : nums) {
            if(num % 2 == 1) {
                res[k] = num;
                k += 2;
            }
        }
        
        return res;
    }
};
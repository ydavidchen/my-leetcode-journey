/*
Given an array of numbers arr. A sequence of numbers is called an arithmetic progression 
if the difference between any two consecutive elements is the same.

Return true if the array can be rearranged to form an arithmetic progression, 
otherwise, return false.


Example 1:
Input: arr = [3,5,1]
Output: true

Example 2:
Input: arr = [1,2,4]
Output: false
*/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       // Brute force approach
        if(arr.size() == 2) {
            return true; //early
        }
        
        sort(arr.begin(), arr.end());
        int DIFF = arr[1] - arr[0];
        for(int i=1; i < arr.size()-1; i++) {
            if(arr[i+1]-arr[i] != DIFF) return false;
        }
        
        return true;
    }
};
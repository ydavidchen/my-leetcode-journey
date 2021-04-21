/*
Given an array of integers arr, write a function that returns true if and only if the number of occurrences of each value in the array is unique.

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Same as Python approach
        unordered_map<int,int> d;
        for(int a : arr) d[a]++;
        
        set<int>s;
        for(auto item : d) s.insert(item.second);
        
        return d.size() == s.size();
        
    }
};
/*
Given a string S of lowercase letters, a duplicate removal consists of 
choosing two adjacent and equal letters, and removing them.
We repeatedly make duplicate removals on S until we no longer can.

Return the final string after all such duplicate removals have been made.  
It is guaranteed the answer is unique.

Example 1:
    Input: "abbaca"
    Output: "ca"
*/

class Solution {
public:
    string removeDuplicates(string S) {
        string res;
        
        for(char & ch : S) {
            if(res.size() && res.back()==ch) {
                res.pop_back();
            } else {
                res.push_back(ch);
            }
        }
        
        return res;
    }
};
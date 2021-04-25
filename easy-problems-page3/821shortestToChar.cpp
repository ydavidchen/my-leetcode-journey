/*
Given a string s and a character c that occurs in s, 
return an array of integers answer where answer.length == s.length 
and answer[i] is the distance from index i to the closest occurrence of character c in s.

The distance between two indices i and j is abs(i - j), 
where abs is the absolute value function.

Examples:
    Input: s = "loveleetcode", c = "e"
    Output: [3,2,1,0,1,0,0,1,2,2,1,0]

    Input: s = "aaab", c = "b"
    Output: [3,2,1,0]

Constraints:
    1 <= s.length <= 104
    s[i] and c are lowercase English letters.
    It is guaranteed that c occurs at least once in s.
*/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res;
        int prev;
        
        // Pass 1: left to right
        prev=-9999; //see constraint
        for(int i=0; i<s.size(); i++){
            if(s[i]==c) prev=i;
            res.push_back(i-prev);
        }
        
        // Pass 2: reverse
        prev=9999;
        for(int i=s.size()-1; i>-1; i--){
            if(s[i]==c) prev=i;
            res[i] = min(res[i], prev-i);
        }

        return res;
    }
};